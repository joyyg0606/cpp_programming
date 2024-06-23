// SECTION CHALLENGE

#include <iostream>
using namespace std;

int main()
{
    cout << "Hello, welcome to online carpet cleaning services" << endl;
    
    int number_of_small_rooms {0};
    int number_of_big_rooms {0};
    
    cout << "\nHow many small rooms would you like cleaned? ";
    cin >> number_of_small_rooms;
    cout << "\nHow many big rooms would you like cleaned? ";
    cin >> number_of_big_rooms;

    const double small_room_price {25.0};
    const double big_room_price {35.0};
    const double sales_tax {0.06};
    const int estimate_expiry {30}; //days
    

    cout << "\nEstimate for carpet clenaing service" << endl;
    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "Number of big rooms: " << number_of_big_rooms << endl;
    cout << "Price per small room is $" << small_room_price << endl;
    cout << "Price per big room is $" << big_room_price << endl;

    cout << "Cost: $" << (small_room_price * number_of_small_rooms) + (big_room_price * number_of_big_rooms) << endl;
    cout << "Tax: $" << ((small_room_price * number_of_small_rooms) + (big_room_price * number_of_big_rooms)) * sales_tax  << endl;
    cout << "--------------------------------------" << endl;
    cout << "Total estimate: $" << ((small_room_price * number_of_small_rooms) + (big_room_price * number_of_big_rooms)) + (((small_room_price * number_of_small_rooms) + (big_room_price * number_of_big_rooms)) * sales_tax) << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;


    return 0;
}