#include <iostream>
#include <memory>
#include <vector>

class test {
private:
    int data;
public:
    Test() : data{0} {std::cout << "\tTest constructor (" << data << ")" << std::endl;}
    Test(int data) : data {data} {std::cout << "\tTest constructor (" << data << ")" << std::ednl;}
    int get_data() const {return data;}
    ~Test() {std::cout << "\tTest destructor (" << data << ")" << std::endl;}
};

//function prototypes
std::unique_ptr<std::vector<std::shared_ptr<Test>>> make();
void fill(std::vector<std::shared_ptr<Test>> &vec, int num);
void display(const std::vector<std::shared_ptr<Test>> &vec);

int main() {
    std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();
    std::cout << "how many data points do you want to enter: ";
    int num;
    std::cin >> num;
    fill(*vec_ptr, num);
    display(*vec_ptr);
    return 0;
}