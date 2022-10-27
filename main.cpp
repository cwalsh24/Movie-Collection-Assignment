/**
 * @file main.cpp
 * @author Connor Walsh, Isaac Copeland (Code4Days)
 * @date 2022-10-25
 * @brief driver code for the program
 * 
 * This program allows the user to import and manage a collection of 
 * movies using the library class and its implementation.
 */

#include <iostream>
#include <iomanip>
#include "library.h"

using namespace std;

int main(){
  //this creates the Library object
  Library l;
  string choice;
  //the following list displays the options the user has
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
  
  //format the output of floats as currency
  cout << fixed << setprecision(2);
  
  while(choice != "8"){
    cout << endl;
    //this code allows the user to call the read_from_file method by typing "1"
    if(choice == "1"){
      string readFile; 
      cout << "Please enter the name of the file: ";
      cin >> readFile;
      cout << "Movie list has been read in." << endl;
      l.read_from_file(readFile);
    }
    
    //this calls the write_to_file method when the user types "2"
    else if(choice == "2"){
      string writeFile; 
      cout << "Please name the file you want to write to (remember to put .txt): ";
      cin >> writeFile;
      l.write_to_file(writeFile);
    }
    
    //this calls the print method when the user types "3" 
    else if(choice == "3"){
      cout << "Printing..." << endl << endl;
      l.print();
    }
    
    //this calls the find_movie method when the user types "4" 
    else if(choice == "4"){
      string title;
      cout << "Enter the title of a movie: ";
      cin.ignore();
      getline(cin, title);
      l.find_movie(title);
    }
    
    //this calls the director_search method when the user types "5" 
    else if (choice == "5"){
      string name;
      cout << "Enter the name of a director: ";
      cin.ignore(); 
      getline(cin, name);
      l.director_search(name);
    }
    
    //this allows the user to add a new movie when they type "6" 
    else if (choice == "6"){
      string title, director, format;
      int runtime, year;
      float price;
      cout << "Enter the title of the movie: ";
      cin.ignore(); 
      getline(cin, title);
      cout << "Enter the director of the movie: ";
      getline(cin, director);
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

    //this code allows the user to call the remove method on a movie
    //when they type "7" 
    else if (choice == "7"){
      string title;
      cout << "Enter the title of a movie: ";
      cin.ignore();
      getline(cin, title);
      l.remove(title);
    }

    cout << endl;
    cout << "Enter another command: ";
    cin >> choice;
  }

  return 0;
}
