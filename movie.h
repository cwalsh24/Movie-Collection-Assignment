/**
 * @file movie.h
 * @author Connor Walsh, Isaac Copeland (Code4Days)
 * @date 2022-10-22
 * @brief this is the movie header file
 * 
 * This header file contains the movie struct for the library program
 */

#ifndef MOVIE_H
#define MOVIE_H

#include <string>


/**
 * struct to represent a movie
 *
 * @struct movie{ movie.h "Movie-Collection-Assignment/movie.h"
 * @brief contains associated data for a movie
 *
 */
struct movie{
  std::string title;
  std::string director;
  int runtime;
  std::string format;
  float price;
  int year;
};

#endif //MOVIE_H
