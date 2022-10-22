/**
 * @file movie.h
 * @author Connor Walsh
 * @date 2022-10-22
 * @brief this is the movie header file
 * 
 * This header file contains the movie struct for the library program
 */

#ifndef MOVIE_H
#define MOVIE_H

#include <string>

struct movie{
  std::string title;
  std::string director;
  int runtime;
  std::string format;
  float price;
  int year;
};

#endif
