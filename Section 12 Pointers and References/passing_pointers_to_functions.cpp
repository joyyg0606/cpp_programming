#include <iostream>
#include <vector>

using namespace std;

void double_data(int *int_ptr) {
    *int_ptr *= 2;
}

// #2 example

void swap (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// #3 example
void display(const vector<string> *v) {
    for (auto str : *v) {
        cout << str << " ";
    }
    cout << endl;
    // (*v).at(0) = "funny";
    // v = nullptr;
}

void display(int *array, int sentinel) {
    while (*array != sentinel) {
        cout << *array++ << " ";
    }
    cout << endl;
}

int main() {

    int value {10};
    int *int_ptr {nullptr};

    cout << "value: " << value << endl;
    double_data(&value);
    cout << "value: " << value << endl;

    int_ptr= &value;
    double_data(int_ptr);
    cout << "value: " << value << endl;

// #2 example

    int x {100}, y{200};
    cout << "\nx: " << x << endl;
    cout << "y: " << y << endl;

    swap(&x, &y);

    cout << "\nx: " << x << endl;
    cout << "y: " << y << endl;

// #3 example

    vector<string> stooges {"a","b","c"};
    display(&stooges);

    int scores[] {100,99,88,77,66,-1};
    display(scores, -1);

    return 0;

}
