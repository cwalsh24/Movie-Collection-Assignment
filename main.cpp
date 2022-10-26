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
  string choice;
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
      string title;
      cout << "Enter the title of a movie: ";
      cin >> title;
      l.find_movie(title);
    }

    else if (choice == "5"){
      string name;
      cout << "Enter the name of a director: ";
      getline(cin, name);
      l.director_search(name);
    }

    else if (choice == "6"){
      string title, director, format;
      int runtime, year;
      float price;
      cout << "Enter the title of the movie: ";
      getline(cin, title);
      cin.get();
      cout << "Enter the director of the movie: ";
      getline(cin, director);
      cin.get();
      cout << "Enter the format of the movie: ";
      getline(cin, format);
      cout << "Enter the runtime of the movie: ";
      cin >> runtime;
      cout << "Enter the year of the movie: ";
      cin >> year;
      cout << "Enter the price of the movie: ";
      cin >> price;
      l.insert_sorted(title, director, runtime, format, price, year);
    }

    else if (choice == "7"){
      string title;
      cout << "Enter the title of a movie: ";
      cin.get();
      getline(cin, title);
      l.remove(title);
    }

    cout << endl;
    cout << "Enter another command: ";
    cin >> choice;
  }
   
  //l.read_from_file("collection.txt");
  //l.print();
  //l.write_to_file("test.txt");
  //l.push_back("Something", "Something", 100, "DVD", 10.50, 2004); 
  //l.print();
  //l.find_movie("Star");
  //l.director_search("George Lucas");
  //l.remove("The Terminator");
  //l.print();

  

  return 0;
}
