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
    Song(std::string name, std::string artist, int rating) : name{std::move(name)}, artist{std::move(artist)}, rating{rating} {}
    std::string getName() const {
        return name;
    }
    std::string getArtist() const {
        return artist;
    }
    int getRating() const {
        return rating;
    }
    bool operator<(const Song &rhs) const {
        return name < rhs.name;
    }
    bool operator==(const Song &rhs) const {
        return name == rhs.name;
    }
};

std::ostream &operator<<(std::ostream &os, const Song &s) {
    os << std::setw(20) << std::left << s.name << std::setw(30) << std::left << s.artist << std::setw(2) << std::left << s.rating;
    return os;
}

void displayMenu() {
    std::cout << "\nF - Play first song" << std::endl;
    std::cout << "N - Play next song" << std::endl;
    std::cout << "P - Play previous song" << std::endl;
    std::cout << "A - Add and play a new song at current location" << std::endl;
    std::cout << "L - List the current playlist" << std::endl;
    std::cout << "============================================================" << std::endl;
    std::cout << "Enter a selection (Q to quit): ";
}

void playCurrentSong(const Song &song) {
    std::cout << "Playing: " << std::endl;
    std::cout << song << std::endl;
}

void displayPlaylist(const std::list<Song> &playlist, const Song &currentSong) {
    for (const auto &song : playlist) {
        std::cout << song << std::endl;
    }
    std::cout << "Current song: " << std::endl;
    std::cout << currentSong << std::endl;
}

int main() {
    std::list<Song> playlist{
        {"God's Plan", "Drake", 5},
        {"Never Be The Same", "Camila Cabello", 5},
        {"Pray For Me", "The Weeknd and K. Lamar", 4},
        {"The Middle", "Zedd, Maren Morris", 5},
        {"Wait", "Maroon 5", 4},
        {"Whatever It Takes", "Imagine Dragons", 3}
    };

    auto currentSong = playlist.begin();
    displayPlaylist(playlist, *currentSong);

    char selection{};
    do {
        displayMenu();
        std::cin >> selection;
        selection = std::toupper(selection);
        switch (selection) {
            case 'F':
                std::cout << "Playing first song" << std::endl;
                currentSong = playlist.begin();
                playCurrentSong(*currentSong);
                break;
            case 'N':
                std::cout << "Playing next song" << std::endl;
                if (++currentSong == playlist.end()) {
                    std::cout << "Wrapping to start of playlist" << std::endl;
                    currentSong = playlist.begin();
                }
                playCurrentSong(*currentSong);
                break;
            case 'P':
                std::cout << "Playing previous song" << std::endl;
                if (currentSong == playlist.begin()) {
                    std::cout << "Wrapping to end of playlist" << std::endl;
                    currentSong = playlist.end();
                }
                --currentSong;
                playCurrentSong(*currentSong);
                break;
            case 'A': {
                std::string name, artist;
                int rating;
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Adding and playing new song" << std::endl;
                std::cout << "Enter song name: ";
                std::getline(std::cin, name);
                std::cout << "Enter song artist: ";
                std::getline(std::cin, artist);
                std::cout << "Enter your rating (1-5): ";
                while (!(std::cin >> rating) || rating < 1 || rating > 5) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Invalid rating. Enter your rating (1-5): ";
                }
                currentSong = playlist.insert(currentSong, Song{name, artist, rating});
                playCurrentSong(*currentSong);
                break;
            }
            case 'L':
                std::cout << std::endl;
                displayPlaylist(playlist, *currentSong);
                break;
            case 'Q':
                std::cout << "Quitting" << std::endl;
                break;
            default:
                std::cout << "Invalid selection, try again..." << std::endl;
                break;
        }
    } while (selection != 'Q');

    std::cout << "Thanks for listening!" << std::endl;
    return 0;
}