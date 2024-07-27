#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>

void display(const std::vector<int &vec) {
    std::cout << "[ ";
    for (auto const &i: vec) {
        std::cout << i << " ";
    }
    std::cout << "]" << std::endl;
}

void test1() {
    std::cout << "\n=======================" << std::endl;
    std::vector<int> nums1 {1,2,3,4,5};
    auto it = nums1.begin();
    std::cout << *it << std::endl;

    it ++;
    std::cout << *it << std::endl;

    it += 2; // point to 4
    std::cout << *it << std::endl; 

    it -= 2; // point to 2
    std::cout << *it << std::endl;

    it = nums1.end() -1; // point to 5
    std::cout << *it << std::endl;
}

void test2() {
    std::cout << "\n===================" << std::endl;
    std::vector<int> nums1{1,2,3,4,5};

    std::vector<int>::iterator it = nums1.begin();
    while (it != nums1.end()) {
        std::cout << *it << std::endl;
        it++;
    }

    it = nums1.begin();
    while (it != nums1.end()) {
        *it = 0;
        it++;
    }
    display(nums1);

}

int main() {
    // test1();
    // test2();
    // test3();
    // test4();
    // test5();
    return 0;
}