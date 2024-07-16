#include <iostream>
#include <memory>
#include <vector>

class Test {
private:
    int data;
public:
    Test() : data{0} {std::cout << "Test constructor (" << data << ")" << std::endl;}
    Test(int data) : data {data} {std::cout << "Test constructor (" << data << ")" << std::endl;}
    int get_data() const {return data;}
    ~Test() {std::cout << "Test destructor (" << data << ")" << std::endl;}
};

using namespace std;

int main() {
    // std::unique_ptr<Test> t1 [new Test{100}];
    // std::unique_ptr<Test> t2 = std::make_unique<Test>(1000);

    // std::unique_ptr<Test> t3;
    // t3 = std::move(t1);
    // if (!t1)
    //     std::cout << "t1 is null ptr" << std::endl;
    
    // std::unique_ptr<Account> a1 = std::make_unique<Checking_Account>("Moe", 5000);
    // std::cout << *a1 << std::endl;

    // for (auto const &acc:accounts)
    //     std::cout << *acc << std::endl;

    return 0;
}