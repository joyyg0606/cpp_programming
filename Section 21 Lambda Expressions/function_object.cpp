#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

struct Square_Functor {
    void operator() (int x) {
        std::cout << x * x << " ";
    }
};

template <typename T> 
struct Displayer {
    void operator() (const T &data) {
        std::cout << data << " ";
    }
};

class Multiplier {
private:
    int num{};
public:
    Multiplier(int n) : num{n} {}
    int operator()(int n) const {
        return n * num;
    }
};

int main() {
    std::cout << "test 1" << std::endl;
    Square_Functor square;
    square(4);

    Displayer<int> d1;
    Displayer<std::string> d2;
    d1(100); //displays 100
    d2("Frank"); //displays frank

    std::cout << "test 2" << std::endl;
    std::vector<int> vec1{1,2,3,4,5};
    std::vector<std::string> vec2 {"Larry", "Moe", "Curly"};

    std::for_each(vec1.begin(), vec1.end(), square);
    std::cout << std::endl;

    std::for_each(vec1.begin(), vec1.end(), Displayer<int>());
    std::cout << std::endl;

    std::for_each(vec1.begin(), vec1.end(), d1);
    std::cout << std::endl;

    std::for_each(vec2.begin(), vec2.end(), Displayer<std::string>());
    std::cout << std::endl;

    std::for_each(vec2.begin(), vec2.end(), d2);
    std::cout << std::endl;


    return 0;
}