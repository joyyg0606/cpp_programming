#include <iostream>
#include <iomanip>

int main () {
    int num {255};

    //displaying using different bases
    std::cout << std::dec << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::oct << num << std::endl;

    //displaying showing the base prefix for hex and oct
    std::cout << std::showbase;
    std::cout << std::hex << num << std::endl;

    
}