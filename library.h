/**
 * @file library.h
 * @author Connor Walsh, Isaac Copeland (Code4Days)
 * @date 2022-10-19
 * @brief this is the library header file
 * 
 * This header file contains the definition of the library class. 
 */


#ifndef LIBRARY_H
#define LIBRARY_H

#include <list>
#include "movie.h"


/**
 * class to represent a collection of movies
 *
 * @class Library{ library.h "Movie-Collection-Assignment/library.h"
 * @brief has utilities to manage movie collection
 *
 */
class Library{
 private: 
  std::list<movie> collection;
 public:
/**
 * Default constructor for the Library class
 *
 * @pre A Library object must be declared in the main
 * @post A Library object has been created, its list is initialized to be empty
 * 
 */
  Library();

/**
 * This is the destructor for the Library class
 *
 * @pre There needs to be a Library object declared in main
 * @post the Library object has been deleted and the movie collection list is empty
 * 
 */
  ~Library();

/**
 * method to read in movie collection from a formatted file
 *
 * @param std::string fileName the name of the file to be read from
 * @return void the file is read in
 * @pre there must be a properly formatted file in the directory
 * @post the file's data is stored
 * 
 */
  void read_from_file(std::string fileName);

/**
 * method that inserts a new movie at the front of the library
 *
 * @param std::string title the title of the movie
 * @param std::string director the director of the movie
 * @param int runtime the runtime of the movie
 * @param std::string format the format of the movie
 * @param float price the price of the movie
 * @param int year the year of release for the movie
 * @return void a new entry is added to the library
 * @post the entry contains the approprite information and is at the front of the library
 * 
 */
  void push_front(std::string title, std::string director, int runtime, std::string format, float price, int year);

/**
 * method that inserts a new movie at the back of the library
 *
 * @param std::string title the title of the movie
 * @param std::string director the director of the movie
 * @param int runtime the runtime of the movie
 * @param std::string format the format of the movie 
 * @param float price the price of the move
 * @param int year the year of release for the movie
 * @return void a new entry is added to the library
 * @post the entry contains the appropriate data and is at the back of the library
 * 
 */
  void push_back(std::string title, std::string director, int runtime, std::string format, float price, int year);

/**
 * method that writes the contents of the library to a new file in a specific format
 *
 * @param std::string fileName the name of the file to be created and/or written to
 * @return void the file is created/overwritten
 * @post a new file is created and formatted so that this program can also read it back in
 * 
 */
  void write_to_file(std::string fileName);

/**
 * method to search the library for movies by title
 *
 * @param std::string title the title of the movie to be searched
 * @pre the movie must exist within the library
 * @return void the data associated with the matching movie is printed to the screen
 * 
 */
  void find_movie(std::string title);

/**
 * method to search the library by director name
 *
 * @param std::string name the name of the director
 * @pre the movie must exist within the library
 * @return void the data associated with the matching movie is printed to the screen
 * 
 */
  void director_search(std::string name);

/**
 * method to insert a new movie into the library in alphabetical order by title
 *
 * @param std::string title the title of the movie
 * @param std::string director the director of the movie
 * @param int runtime the runtime of the movie
 * @param std::string format the format of the movie
 * @param float price the price of the movie
 * @param int year the year of release of the movie 
 * @return void the entry is added to the library
 * @post the movie is added the library with the appropriate data at the appropriate position
 * 
 */
  void insert_sorted(std::string title, std::string director, int runtime, std::string format, float price, int year);

/**
 * method to print the contents of the library to the screen
 *
 * @return void the library is displayed
 * 
 */
  void print();

/**
 * method to delete an entry of the library
 *
 * @param std::string title the name of the movie
 * @pre the movie must exist within the library
 * @return void the movie is removed from the library
 * @post the library no longer contains the movie and maintains its order
 * 
 */
  void remove(std::string title);
};

#endif //LIBRARY_H
