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
    std::cout << std::dec << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::oct << num << std::endl; 

    //display hex value in uppercase
    std::cout << std::showbase << std::uppercase;
    std::cout << std::hex << num << std::endl;

    //display the + sign in fron tof positive base 10 numbers
    std::cout << std::showpos;
    std::cout << std::dec << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::oct << num << std::endl;

    //setting using the set method
    std::cout.setf(std::ios::showbase);
    std::cout.setf(std::ios::uppercase);
    std::cout.setf(std::ios::showpos);

    //resetting to defaults
    std::cout << std::resetiosflags(std::ios::basefield);
    std::cout << std::resetiosflags(std::ios::showbase);
    std::cout << std::resetiosflags(std::ios::showpos);
    std::cout << std::resetiosflags(std::ios::uppercase);

    std::cout << "Enter an integer: ";
    std::cin >> num;

    std::cout << "Decimal default: " << num << std::endl;
    
    std::cout << "Hexadecimal : " << std::hex << num << std::endl;
    std::cout << "Hexadecimal : " << std::hex << std::uppercase << num << std::endl;
    std::cout << "Hexadecimal : " << std::hex << num << std::endl;
    std::cout << "Hexadecimal : " << std::hex << std::nouppercase << num << std::endl;

    std::cout << "Octal : " << std::oct << num << std::endl;
    std::cout << "Hexadecimal : " << std::hex << std::showbase << num << std::endl;
    std::cout << "Octal : " << std::oct << num << std::endl;

    std::cout << std::endl << std::endl;
    return 0;

}