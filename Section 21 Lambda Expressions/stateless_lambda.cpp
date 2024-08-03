#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>

class Person {
    friend std::ostream &operator<<(std::ostream &os, const Person &rhs);
private:
    std::string name;
    int age;
public:
    Person(std::string name, int age) : name{name}, age{age} {};
    Person(const Person &p):name{p.name}, age{p.age} {}
    ~Person() = default;
    std::string get_name() const {return name;}
    void set_name(std::string name) {this->name = name;};
    int get_age() const {return age;}
    void set_age(int age) {this->age = age;}
};

std::ostream &operator<<(std::ostream &os, const Person &rhs) {
    os << "[Person: " << rhs.name << ":" << rhs.age << "]";
    return os;
}

void test1() {
    std::cout << " test 1" << std::endl;
    [] () {std::cout << "HI" << std::endl;}();
    [] (int x) {std::cout << x << std::endl;}(100);
    [](int x, int y) {std::cout << x + y << std::endl;}(100,200);
}

void test2() {
    std::cout << "test 2" << std::endl;

    auto l1 = []() {std::cout << "hi" << std::endl;};
    l1();

    int num1 {100};
    int num2 {100};

    auto l2 = [](int x, int y) {std::cout << x+y << std::endl;};
    l2(10, 20);
    l2(num1, num2);

    auto l3 = [](int &x, int y) {
        std::cout << "x: " << x << " y: " << y << std::endl;
        x = 1000;
        y = 2000;
    };

    l3(num1, num2);
    std::cout << "num1: " << num1 << " num2: " << num2 << std::endl;
}

int main() {
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();

    std::cout << std::endl;
    return 0;
}