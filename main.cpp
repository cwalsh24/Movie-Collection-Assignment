/**
 * @file main.cpp
 * @author Connor Walsh
 * @date 2022-10-25
 * @brief stuff
 * 
 * stuff
 */

#include <iostream>
#include "library.h"

using namespace std;

int main()
{
  Library l;
  /**string choice;
  cout << "Welcome to the Movie Collection Library!  You may select one of the following options: " << endl;
  cout << "1 Read a list of movies from a file" << endl;
  cout << "2 Write your collection to a file" << endl;
  cout << "3 Print your movie collection" << endl;
  cout << "4 Find a movie by name" << endl;
  cout << "5 Find a movie by director" << endl;
  cout << "6 Add a movie" << endl;
  cout << "7 Delete a movie" << endl;
  cout << "8 Exit this program" << endl << endl;
  cout << "Please enter your choice now: ";
  cin >> choice;
  
  while(choice != "8"){
    cout << endl;
    //The following code allows the user to call the read_from_file method.
    if(choice == "1"){
      string readFile; 
      cout << "Please enter the name of the file: ";
      cin >> readFile;
      cout << "Movie list has been read in." << endl;
      l.read_from_file(readFile);
    }
    
    else if(choice == "2"){
      string writeFile; 
      cout << "Please name the file you want to write to (remember to put .txt): ";
      cin >> writeFile;
      l.write_to_file(writeFile);
    }

    else if(choice == "3"){
      cout << "Printing..." << endl << endl;
      l.print();
    }

    else if(choice == "4"){
      string name;
      cout << "Enter the name of a movie: ";
      cin >> name;
      l.find_movie(name);
    }

    cout << endl;
    cout << "Enter another command: ";
    cin >> choice;
  }
  **/ 
  l.read_from_file("collection.txt");
  l.print();
  //l.write_to_file("test.txt");
  //l.push_back("Something", "Something", 100, "DVD", 10.50, 2004); 
  //l.print();
  //l.find_movie("Star");
  //l.director_search("George Lucas");
  //l.remove("The Terminator");
  //l.print();

  

  return 0;
}
