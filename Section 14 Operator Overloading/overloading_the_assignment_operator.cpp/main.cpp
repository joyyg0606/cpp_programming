#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main() {
    Mystring a{"Hello"};
    Mystring b;
    b = a;

    b = "This is a test";
}