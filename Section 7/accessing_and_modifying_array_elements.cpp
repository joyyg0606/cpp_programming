// arrays

#include <iostream>

using namespace std;

int main()
{
    char vowels [] {'a', 'e', 'i', 'o', 'u'};
    cout << "\nThe first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;

    // cin >> vowels[5]; out of bounds - dont do this

    double hi_temps [] {90.1, 92.3, 13.2, 45.9};
    cout << "\nThe first high temperature is: " << hi_temps[0] << endl;

    hi_temps[0] = 100.5; //set first to 100.5
    cout << "The first high temperature is now: " << hi_temps[0] << endl;


    int test_scores [5] {100, 90, 70, 60, 30};

    cout << "\nscore at index 0: " << test_scores[0] << endl;
    cout << "\nscore at index 1: " << test_scores[1] << endl;
    cout << "\nscore at index 2: " << test_scores[2] << endl;
    cout << "\nscore at index 3: " << test_scores[3] << endl;
    cout << "\nscore at index 4: " << test_scores[4] << endl;

    cout << "\nEnter 5 test scores: ";
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];

    cout << "\nThe updated array is: " << endl;
    cout << "\nscore at index 0: " << test_scores[0] << endl;
    cout << "\nscore at index 1: " << test_scores[1] << endl;
    cout << "\nscore at index 2: " << test_scores[2] << endl;
    cout << "\nscore at index 3: " << test_scores[3] << endl;
    cout << "\nscore at index 4: " << test_scores[4] << endl;

    cout << "\nNotice what the value of the array name is: " << test_scores << endl;

    return 0;
}

