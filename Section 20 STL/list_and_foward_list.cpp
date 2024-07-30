#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

class Person {
    friend std::ostream &operator << (std::ostream &os, const Person &p);
    std::string name;
    int age;
public:
    Person() : name {"Unknown"}, age{0} {}
    Person (std::string name, int age) : name{name}, age{age} {}
    bool operator<(const Person &rhs) const {
        return this->age < rhs.age;
    }
    bool operator==(const Person &rhs) const {
        return (this->name == rhs.name && this->age == rhs.age);
    }
};

std::ostream &operator<<(std::ostream &os, const Person &p) {
    os << p.name << ":" << p.age;
    return os;
}

template <typename T>
void display(const std::list <T> &l) {
    std::cout << "[ ";
    for (const auto &elem:l) {
        std::cout << elem << " ";
    }
    std::cout << "]" << std::endl;
}

void test1() {
    std::cout << "test 1" << std::endl;

    std::list<int> l1 {1,2,3,4,5};
    display(l1);

    std::list<std::string> l2;
    l2.push_back("Back");
    l2.push_front("Front");
    display(l2);

    std::list<int> l3;
    l3 = {1,2,3,4,5,6,7,8,9,10};
    display(l3);
    
    std::list<int> l4 (10,100);
    display(l4);
}

void test2() {
    std::cout << "Test 2" << std::endl;

    std::list<int> l {1,2,3,4,5,6,7,8,9,10};
    display(l);
    std::cout << "Size: " << l.size() << std::endl;

    std
}