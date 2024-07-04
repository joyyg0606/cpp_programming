#include <iostream>

using namespace std;

class Player {
private:
    std::string name {"xxxxx"}; // initialization order is determined here
    int health;
    int xp;

public: 
    // overloaded constructors
    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
    // Player() {} // ambiguous, will not compile
};

// Player::Player() : Player{"None",0,0} {
//     cout << "No-args constructor" << endl;
// }

// Player::Player(std::string name_val) : name{name_val}, health{0}, xp{0} { // constructor initialization list
// }
// Player::Player(std::string name_val) : Player{name_val,0,0} { // delegating constructors
//     cout << "One-args constructor" << endl;
// }

Player::Player(std::string name_val, int health_val, int xp_val) : name{name_val}, health{health_val}, xp{xp_val} {
    cout << "Three args - constructor" << endl;
}

int main() {
    Player empty;
    Player frank {"Frank"};
    Player her {"hero", 100};
    Player villain {"Villain", 100, 55};

    return 0;
}

