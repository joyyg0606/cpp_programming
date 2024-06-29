// section 11 challenge
// refining menu challenge from section 9 using functions

#include <iostream> 
#include <cctype>
#include <vector>
#include <iomanip>
#include <string>
#include <limits>

using namespace std;

void display_menu();
void change_to_upper(string &user_choice);
void print_list(vector<long> data_list);
void add(vector<long> &data_list);
void mean(vector<long>);
void smallest_num(vector<long>);
void largest_num(vector<long>);
bool checking_if_empty(const vector<long>, const string);
void find(const vector<long>);
bool find(const vector<long>, int);

void display_menu() {
    cout << "\n=== MENU OPTIONS ===\nP: print numbers\nM: display mean\nS: display smallest number\nL: display largest number\nF: find a number within the list\nQ: quit\n\nEnter your choice: ";
}

void change_to_upper (string &user_choice) {
    for (char &c : user_choice) {
        c = toupper(c);
    }
}

void print_list(vector<long> data_list) {
    cout << "[ ";
    for (auto num : data_list) {
        cout << num << " ";
    }  
    cout << "]" << endl;
}

void add(vector<long> &data_list) {
    int user_int {};
    cout << "Enter 1 integer to add to the list: ";
    cin >> user_int;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Clear the input buffer
    data_list.push_back(user_int);
    cout << "Adding " << user_int << " to the list..." << endl;
    user_int = 0;
}

void mean(vector<long> data_list) {
    int sum_of_data_list{0};
    for (auto num : data_list) {
        sum_of_data_list += num;
    }
    double mean_of_data_list = sum_of_data_list / static_cast<double>(data_list.size());
    cout << fixed << setprecision(2) << "The mean of the list is: " << mean_of_data_list << endl; 
}

void smallest_num(vector<long> data_list) {
    int smallest_num {data_list.at(0)};
    for (auto num : data_list) {
        if (num < smallest_num) {
            smallest_num = num;
        }
    }
    cout << "The smallest number in the list is: " << smallest_num << endl;
}

void largest_num(vector<long> data_list) {
    int largest_num {data_list.at(0)};
    for (auto num : data_list) {
        if (num > largest_num) {
            largest_num = num;
        }
    }
    cout << "The largest number in the list is: " << largest_num << endl;
}

bool checking_if_empty(const vector<long> data_list, const string user_choice) {
    if (data_list.size() != 0) {
        return false;
    }
    return true;
}

void find(const vector<long> data_list) {
    int target{};
    cout << "Enter the number to find: ";
    cin >> target;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Clear the input buffer
    if (find(data_list, target)) {
        cout << target << " is in the list" << endl;
    } else {
        cout << target << " is not in the list" << endl;
    }
}

bool find(const vector<long> data_list, int target) {
    for (auto num : data_list) {
        if (num == target) {
            return true;
        }
    }
    return false;
}

int main() {

    string user_choice {};
    vector<long> data_list {};

    do {

        display_menu();
        getline(cin, user_choice);
        change_to_upper(user_choice);

        if (user_choice == "P") {
            if (checking_if_empty(data_list, user_choice) == false) {
                print_list(data_list);
            } else {
                cout << "No data - list is empty, please try again." << endl;
            }
        } else if (user_choice == "A") {
            add(data_list);
        } else if (user_choice == "M") {
            if (checking_if_empty(data_list, user_choice) == false) {
                mean(data_list);
            } else {
                cout << "No data - list is empty, please try again." << endl;
            }
        } else if (user_choice == "S") {
            if (checking_if_empty(data_list, user_choice) == false) {
                smallest_num(data_list);
            } else {
                cout << "No data - list is empty, please try again." << endl;
            }
        } else if (user_choice == "L") {
            if (checking_if_empty(data_list, user_choice) == false) {
                largest_num(data_list);
            } else {
                cout << "No data - list is empty, please try again." << endl;
            }
        } else if (user_choice == "F") {
            if (checking_if_empty(data_list, user_choice) == false) {
                find(data_list);
            } else {
                cout << "No data - list is empty, please try again." << endl;
            }
        } else if (user_choice.length() > 1) {
            if (user_choice != "Q") {
                cout << "Invalid input - Please enter a single character and try again" << endl;
            } else {
                cout << "Invalid choice - Please try again" << endl;
            }
        }

    } while (user_choice != "Q" && user_choice != "q");
    cout << "Goodbye" << endl;

    return 0;
}