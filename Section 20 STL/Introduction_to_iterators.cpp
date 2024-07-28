#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>

// Function to display the contents of a vector
void display(const std::vector<int> &vec) {
    std::cout << "[ ";
    for (auto const &i : vec) {
        std::cout << i << " ";
    }
    std::cout << "]" << std::endl;
}

// Function to demonstrate basic iterator operations on a vector
void test1() {
    std::cout << "\n=======================" << std::endl;
    std::vector<int> nums1 {1, 2, 3, 4, 5};
    auto it = nums1.begin();
    std::cout << *it << std::endl;

    it++;
    std::cout << *it << std::endl;

    it += 2; // point to 4
    std::cout << *it << std::endl; 

    it -= 2; // point to 2
    std::cout << *it << std::endl;

    it = nums1.end() - 1; // point to 5
    std::cout << *it << std::endl;
}

// Function to demonstrate modifying elements through iterators
void test2() {
    std::cout << "\n===================" << std::endl;
    std::vector<int> nums1 {1, 2, 3, 4, 5};

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

// Function to demonstrate const iterators
void test3() {
    std::cout << "\n===================" << std::endl;
    std::vector<int> nums1 {1, 2, 3, 4, 5};

    std::vector<int>::const_iterator it1 = nums1.begin();

    while (it1 != nums1.end()) {
        std::cout << *it1 << std::endl;
        it1++;
    }

    // Uncommenting the following lines will cause a compiler error because it1 is a const_iterator
    // it1 = nums1.begin();
    // while (it1 != nums1.end()) {
    //     *it1 = 0; // compiler error
    //     it1++;
    // }
}

// Function to demonstrate reverse and constant reverse iterators
void test4() {
    std::cout << "\n===================" << std::endl;
    
    std::vector<int> vec {1, 2, 3, 4};
    auto it1 = vec.rbegin();
    while (it1 != vec.rend()) {
        std::cout << *it1 << std::endl;
        it1++;
    }

    std::list<std::string> name {"a", "b", "c"};
    auto it2 = name.crbegin();
    std::cout << *it2 << std::endl;
    it2++;
    std::cout << *it2 << std::endl;

    std::map<std::string, std::string> favorites {
        {"Frank", "C++"},
        {"Bill", "Java"},
        {"James", "Haskell"}
    };
    auto it3 = favorites.begin();
    while (it3 != favorites.end()) {
        std::cout << it3->first << " : " << it3->second << std::endl;
        it3++;
    }
}

// Function to demonstrate iterators over a subrange of a vector
void test5() {
    std::cout << "\n===================" << std::endl;

    std::vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto start = vec.begin() + 2;
    auto finish = vec.end() - 3;

    while (start != finish) {
        std::cout << *start << std::endl;
        start++;
    }
}

int main() {
    test1();
    test2();
    test3();
    test4();
    test5();
    return 0;
}