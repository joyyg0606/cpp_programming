#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    string user_choice {};
    long user_int {};
    vector<long> data_list {};

    do {
        cout << "\nMENU OPTIONS\nP: print numbers\nM: display mean\nS: display smallest number\nL: display largest number\nQ: quit\n\nEnter your choice: ";
        cin >> user_choice;

        if (user_choice == "p" || user_choice == "P") {

            if (data_list.size() != 0) {
                cout << "[ ";
                for (auto num : data_list) {
                    cout << num << " ";
                }
                cout << "]" << endl;
            } else {
                cout << "No data - List empty please try again" << endl;
            }

        } else if (user_choice == "a" || user_choice == "A") {

            cout << "Enter an integer to add to the list: ";
            cin >> user_int;
            data_list.push_back(user_int);
            cout << "Adding " << user_int << " to the list..." << endl;
            user_int = 0;

        } else if (user_choice == "m" || user_choice == "M") {

            if (data_list.size() != 0) {
                int sum_of_data_list{0};
                for (auto num : data_list) {
                    sum_of_data_list += num;
                }
                double mean_of_data_list = sum_of_data_list / static_cast<double>(data_list.size());
                cout << fixed << setprecision(2) << "The mean of the list is: " << mean_of_data_list << endl;
            } else {
                cout << "No data - List empty please try again" << endl;
            }

        } else if (user_choice == "s" || user_choice == "S") {

            if (data_list.size() != 0) {
                int smallest_num {data_list.at(0)};
                for (auto num : data_list) {
                    if (num < smallest_num) {
                        smallest_num = num;
                    }
                }
                cout << "The smallest number in the list is: " << smallest_num << endl;
            } else {
                cout << "No data - List empty please try again" << endl;
            }

        } else if (user_choice == "l" || user_choice == "L") {

            if (data_list.size() != 0) {
                int largest_num {data_list.at(0)};
                for (auto num : data_list) {
                    if (num > largest_num) {
                        largest_num = num;
                    }
                }
                cout << "The largest number in the list is: " << largest_num << endl;
            } else {
                cout << "No data - List empty please try again" << endl;
            }

        } else if (user_choice != "q" && user_choice != "Q") {
            if (user_choice.length() > 1) {
                cout << "Invalid input - Please enter a single character and try again" << endl;
            } else {
                cout << "Invalid choice - Please try again" << endl;
            }
        }

    } while (user_choice != "Q" && user_choice != "q");

    cout << "Goodbye" << endl;

    return 0;
}