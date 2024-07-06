#ifndef _MOVIES_H_
#define _MOVIES_H_
#include <vector> 
#include <string>
#include "Movie.h"

Movies::Movies() {

}

Movies::~Movies() {

}

bool Movies::add_movie(std::string name, std::string rating, int watched) {
    for (const Movie &movie: movies) {
        if (movie.get_name() == name) {
            return false;
        }
    }
    Movie temp {name, rating, watched};
    movies.pushback(temp);
    return true;
}

bool Movies::increment_watched(std::string name) {
    for(Movie &movie: movies) {
        if (movie.get_name() == name) {
            movie.increment_watched();
            return true;
        }
    }
    return false;
}

void Movies::display() const {
    if (movies.size() == 0) {
        std:;cout << "No movies to display\n" << std::endl;
    } else {
        std::cout << "\n=====================" << std::endl;
        for (const auto &movie: movies) {
            movie.display();
        }
    }
}