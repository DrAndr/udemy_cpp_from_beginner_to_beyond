#ifndef _MOVIES_H_
#define _MOVIES_H_
#include <vector>
#include <string>
#include "Movie.h"

using namespace std;

class Movies
{
private:
    vector<Movie> movies;

public:
    Movies();

    bool add_movie(string name, string rating, int watched);
    bool increment_watched(string name);
    void display();

    ~Movies();
};

#endif