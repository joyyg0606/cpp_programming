#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // for std::iota

void test1() {
    std::cout << "test 1" << std::endl;

    std::vector<int> nums{10, 20, 30, 40, 50};

    std::for_each(nums.begin(), nums.end(), [](int num) {
        std::cout << num << " ";
    });
    std::cout << std::endl;
}

void test2() {
    std::cout << "test 2" << std::endl;

    struct Point {
        int x;
        int y;
    };

    Point pt1{1, 2};
    Point pt2{4, 3};
    Point pt3{3, 5};
    Point pt4{3, 1};

    std::vector<Point> triangle1{pt1, pt2, pt3};
    std::vector<Point> triangle2{pt2, pt3, pt1};
    std::vector<Point> triangle3{pt1, pt2, pt4};

    if (std::is_permutation(triangle1.begin(), triangle1.end(), triangle2.begin(), [](Point lhs, Point rhs) {
        return lhs.x == rhs.x && lhs.y == rhs.y;
    })) {
        std::cout << "Triangle1 and Triangle2 are equivalent" << std::endl;
    } else {
        std::cout << "Triangle1 and Triangle2 are not equivalent" << std::endl;
    }

    if (std::is_permutation(triangle1.begin(), triangle1.end(), triangle3.begin(), [](Point lhs, Point rhs) {
        return lhs.x == rhs.x && lhs.y == rhs.y;
    })) {
        std::cout << "Triangle1 and Triangle3 are equivalent" << std::endl;
    } else {
        std::cout << "Triangle1 and Triangle3 are not equivalent" << std::endl;
    }
}

void test3() {
    std::cout << "test 3" << std::endl;

    std::vector<int> test_scores{91, 77, 32, 90, 15};
    int bonus_points{5};

    std::transform(test_scores.begin(), test_scores.end(), test_scores.begin(), [bonus_points](int score) {
        return score + bonus_points;
    });

    for (int score : test_scores)
        std::cout << score << " ";
    std::cout << std::endl;
}

void test4() {
    std::cout << "test 4" << std::endl;

    std::vector<int> nums{1, 2, 3, 4, 5};

    nums.erase(std::remove_if(nums.begin(), nums.end(), [](int num) {
        return num % 2 == 0;
    }),
    nums.end());

    for (int num : nums)
        std::cout << num << " ";
    std::cout << std::endl;
}

class Person {
    friend std::ostream &operator<<(std::ostream &os, const Person &rhs);

private:
    std::string name;
    int age;

public:
    Person(std::string name, int age) : name{name}, age{age} {}
    Person(const Person &p) : name{p.name}, age{p.age} {}
    ~Person() = default;
    std::string get_name() const { return name; }
    void set_name(std::string name) { this->name = name; }
    int get_age() const { return age; }
    void set_age(int age) { this->age = age; }
};

std::ostream &operator<<(std::ostream &os, const Person &rhs) {
    os << "[Person: " << rhs.name << " : " << rhs.age << "]";
    return os;
}

void test5() {
    std::cout << "test 5" << std::endl;

    Person person1("Larry", 18);
    Person person2("Moe", 30);
    Person person3("Curly", 25);

    std::vector<Person> people{person1, person2, person3};

    std::sort(people.begin(), people.end(), [](Person lhs, Person rhs) {
        return lhs.get_age() > rhs.get_age();
    });

    for (Person person : people)
        std::cout << person << std::endl;
}

bool in_between(const std::vector<int> &nums, int start_value, int end_value) {
    bool result{false};
    result = std::all_of(nums.begin(), nums.end(), [start_value, end_value](int value) {
        return value >= start_value && value <= end_value;
    });
    return result;
}

void test6() {
    std::cout << "test 6" << std::endl;
    std::cout << std::boolalpha;

    std::vector<int> nums(10);
    std::iota(nums.begin(), nums.end(), 1);

    for (int num : nums)
        std::cout << num << " ";

    std::cout << std::endl;

    std::cout << in_between(nums, 50, 60) << std::endl;
    std::cout << in_between(nums, 1, 10) << std::endl;
    std::cout << in_between(nums, 5, 7) << std::endl;
}

int main() {
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    return 0;
}