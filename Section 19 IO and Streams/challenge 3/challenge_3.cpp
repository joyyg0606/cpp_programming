#include <iostream>



int main() {
    std::ifstream in_file {};
    std::string word_to_find {};
    std::string word_read {};
    int word_count {0};
    int match_count {0};

    in_file.open("Section 19 IO and Streams\challenge 3\random.txt");
    if(!in_file) {
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }
}