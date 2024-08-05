#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int global_x {1000};

void test1() {
    std::cout << "test 1" << std::endl;

    int local_x {100};

    auto l = [local_x] () {
        std::cout << local_x << std::endl;
        std::cout << global_x << std::endl;
    };
    l();
}

void test2() {
    std::cout << "test 2" << std::endl;

    int x {100};

    auto l = [x] () mutable {
        x += 100;
        std::cout << x << std::endl;
    };

    l();
    std::cout << x << std::endl;

    l();
    std::cout << x << std::endl;
}

void test3() {
    std::cout << "test 3" << std::endl;

    int x {100};

    auto l = [&x] () mutable {
        x += 100;
        std::cout << x << std::endl;
    };

    l();
    std::cout << x << std::endl;
}

void test4() {
    std::cout << "test 4" << std::endl;

    int x {100};
    int y {200};
    int z {300};

    auto l = [=] () mutable {
        x += 100;
        y += 100;
        std::cout << x << std::endl;
        std::cout << y << std::endl;
    };
    l();

    std::cout << "\n";
    std::cout << x << std::endl;
    std::cout << y << std::endl;
}

void test5() {
    std::cout << "test 5" << std::endl;

    int x {100};
    int y {200};
    int z {300};

    auto l = [&] () {
        x += 100;
        y += 100;
        z += 100;
        std::cout << x << std::endl;
        std::cout << y << std::endl;
        std::cout << z << std::endl;
    };
    l();

    std::cout << "\n";
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;
}

void test6() {
    std::cout << "test 6" << std::endl;

    int x {100};
    int y {200};
    int z {300};

    auto l = [=, &y] () mutable {
        x += 100;
        y += 100;
        z += 100;
        std::cout << x << std::endl;
        std::cout << y << std::endl;
        std::cout << z << std::endl;
    };
    l();

    std::cout << "\n";
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;
}

void test7() {
    std::cout << "Test 7" << std::endl;

    int x{100};
    int y{200};
    int z{300};

    auto l = [&, x, z] () mutable {
        x += 100;
        y += 100;
        z += 100;
        std::cout << x << std::endl;
        std::cout << y << std::endl;
        std::cout << z << std::endl;
    };
    l();

    std::cout << "\n";
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;
}

class Person {
    friend std::ostream &operator<<(std::ostream &os, const Person &rhs) {
        os << "Person[name: " << rhs.name << ", age: " << rhs.age << "]";
        return os;
    }
private:
    std::string name;
    int age;
public:
    Person() = default;
    Person(std::string name, int age) : name{name}, age{age} {}
    Person(const Person &p) = default;
    ~Person() = default;
    std::string get_name() const {return name;}
    void set_name(std::string name) {this->name = name;}
    int get_age() const {return age;}
    void set_age(int age) {this->age = age;}

    auto change_person1() { return [this] (std::string new_name, int new_age) { name = new_name; age = new_age; }; }
    auto change_person2() { return [=] (std::string new_name, int new_age) mutable { name = new_name; age = new_age; }; }
    auto change_person3() { return [&] (std::string new_name, int new_age) { name = new_name; age = new_age; }; }
};

int main() {
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    return 0;
}
