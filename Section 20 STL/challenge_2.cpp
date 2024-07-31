#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <iomanip>
#include <limits>

class Song {
    friend std::ostream &operator<<(std::ostream &os, const Song &s);
    std::string name;
    std::string artist;
    int rating;
public:
    Song() = default;
    Song(std::string name, std::string artist, int rating) : name{name}, artist{artist}, rating{rating} {}
    std::string get_name() const {
        return name;
    }
    std::string get_artist() const {
        return artist;
    }
    int get_rating() const {
        return rating;
    }
    bool operator<(const Song &rhs) const {
        return this-> name < rhs.name;
    }

    bool operator==(const Song &rhs) const {
        return this->name == rhs.name;
    }
};

std::ostream &operator<<(std::ostream &os, const Song &s) {
    os << std::setw(20) << std::left << s.name << std::setw(30) << std::left << s.artist << std::setw(2) << std::left << s.rating;
    return os;
}

void display_menu() {
    std::cout << "\nF - play first song" << std::endl;
    std::cout << "N - play next song" << std::endl;
    std::cout << "P - play previous song" << std::endl;
    std::cout << "A - add and play a new song at current location" << std::endl;
    std::cout << "L - list the current playlist" << std::endl;
    std::cout << "============================================================" << std::endl;
    std::cout << "Enter a selection (Q to quit): ";
}

void play_current_song(const Song &song) {


    std::cout << "you implement this function" << std::endl;
}

void display_playlist(const std::list<Song> &Playlist, const Song &current_song) {

    std::cout << "you implement this function" << std::endl;
}

int main() {
    std::list<Song> playlist{
        {"god's plan", "Drake", 5},
        {"Never be the same", "camila cabello", 5},
        {"Pray for me", "The weekend and k. lamar", 4},
        {"The middle", "zedd, maren morris", 5},
        {"wait", "Maroone 5", 4},
        {"Whatever it takes", "imagine dragons", 3}
    };

    std::list<Song>::iterator current_song = playlist.begin();
    
    std::cout << "To be implemented" << std::endl;

    std::cout << "Thanks for listening!" << std::endl;
    return 0;
}