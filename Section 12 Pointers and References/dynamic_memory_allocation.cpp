#include <iostream>

using namespace std;

int main() {

    int *int_ptr {nullptr};
    int_ptr = new int;
    cout << int_ptr << endl;
    delete int_ptr;

    size_t size{0};
    double *temp_ptr {nullptr};

    cout << "How many temps? ";
    cin >> size;

    temp_ptr = new double[size];
    cout << temp_ptr << endl;
    delete [] temp_ptr;

// the relationship between arrays and pointers

    int scores [] {100,99,88};

    cout << "Value of scores: " << scores << endl;

    int *score_ptr {scores};
    cout << "Value of score_ptr: " << score_ptr << endl;

    cout << "\nArray subscript notation" << endl;
    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;

    cout << "\nPointer subscript notation" << endl;
    cout << score_ptr[0] << endl;
    cout << score_ptr[1] << endl;
    cout << score_ptr[2] << endl;

    cout << "\nPointer offset notation" << endl;
    cout << *score_ptr << endl;
    cout << *(score_ptr + 1) << endl;
    cout << *(score_ptr + 2) << endl;

    cout << "\nArray offset notation" << endl;
    cout << *scores << endl;
    cout << *(scores + 1) << endl;
    cout << *(scores + 2) << endl;

// pointer arithmetic

    int scores[]{100,90,80,70,-1};
    int *score_ptr {scores};

    while (*score_ptr != -1) {
        cout << *score_ptr << endl;
        score_ptr++;
    }

    cout << "\n===================" << endl;
    score_ptr = scores;
    while (*score_ptr != -1) {
        cout << *score_ptr++ << endl;
    }

    cout << "\n=============" << endl;
    string s1 {"Frank"};
    string s2 {"Frank"};
    string s3 {"James"};

    string *p1 {&s1};
    string *p2 {&s2};
    string *p3 {&s1};

    cout << boolalpha;
    cout << p1 << "==" << p2 << ": " << (p1 == p2) << endl; //false
    cout << p1 << "==" << p3 << ": " << (p1 == p3) << endl; //true

    cout << *p1 << "==" << *p2 << ": " << (*p1 == *p2) << endl; //true
    cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl; //true

    p3 = &s3; // point to James
    cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl; //false

    cout << "\n==============" << endl;
    char name [] {"Frank"};

    char *char_ptr1 {nullptr};
    char *char_ptr2 {nullptr};

    char_ptr1 = &name[0]; //F
    char_ptr2 = &name[3]; //n

    cout << "in the string " << name << ", " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " << *char_ptr1 << endl;

    return 0;

}