/**
 * @file library.cpp
 * @author Connor Walsh
 * @date 2022-10-20
 * @brief Stuff
 * 
 * Stuff
 */

#include <iostream>
#include <fstream>
#include "library.h"

using namespace std;

Library::Library(){

}

Library::~Library() {
  //this should empty the list;
  collection.clear();
}

void Library::read_from_file(string fileName){
  ifstream in;
  //These are the temp variables for the priming read and while loop.
  string temp1, temp2, temp4;
  int temp3, temp6;
  float temp5;
  movie tempM;
  //opens up the file stream.
  in.open(fileName.c_str());
  //priming read of the movie information
  getline(in, temp1);
  
  //This loop stores the data from the file into the linked list.
  while(in){
    getline(in, temp2);
    in >> temp3;
    in.ignore();
    getline(in, temp4);
    in >> temp5 >> temp6;
    in.ignore(); 

    tempM.title = temp1;
    tempM.director = temp2;
    tempM.runtime = temp3;
    tempM.format = temp4;
    tempM.price = temp5;
    tempM.year = temp6;
    //insert_sorted(temp1, temp2, temp3);
    collection.push_back(tempM); //remove later  movie &collection
    getline(in, temp1);
  }

  //closes the file stream.
  in.close();
}

void Library::push_front(string title, string director, int runtime, string format, float price, int year){
  //declares a movie variable
  movie tempM;
  //this code stores all the movie information into the movie struct.
  tempM.title = title;
  tempM.director = director;
  tempM.runtime = runtime;
  tempM.format = format;
  tempM.price = price;
  tempM.year = year;
  //calls the list push_front method
  collection.push_front(tempM);
}

void Library::push_back(string title, string director, int runtime, string format, float price, int year){
  //declares a movie variable
  movie tempM;
  //this code stores all the movie information into the movie struct.
  tempM.title = title;
  tempM.director = director;
  tempM.runtime = runtime;
  tempM.format = format;
  tempM.price = price;
  tempM.year = year;
  //calls the list push_back method
  collection.push_back(tempM);
}

void Library::write_to_file(string fileName){
  //this is the iterator variable used in the loop. 
  list<movie>::iterator i;
  ofstream out;
  //opens the file stream
  out.open(fileName.c_str());
  
  for(i = collection.begin(); i != collection.end(); i++){
    out << i->title << endl << i->director << endl << i->runtime <<
      endl << i->format << endl << i->price << endl << i->year << endl;
  }
  out.close();
  cout << "Output has been written to " << fileName << endl;
}

void Library::find_movie(string movieName){ //since this is printing them I think it should be void this time
  //declares an iterator variable to travel through the list
  list<movie>::iterator it = collection.begin();
  //this for loop travels through each node of the list
  for(it = collection.begin(); it != collection.end(); it++){
    //this if statement checks to see if the user inputted string
    //is a substring of the movie title. 
    if (it->title.find(movieName) != string::npos){
      //this code prints the movie information. 
      cout << "Title: " << it->title << endl;
      cout << "Director: " << it->director << endl;
      cout << "Runtime: " << it->runtime << " minutes" << endl;
      cout << "Format: " << it->format << endl;
      cout << "Price: $" << it->price << endl;
      cout << "Year: " << it->year << endl;
    }
  }
}

void Library::director_search(string name){
  //this declares an iterator variable to travel through the list
  list<movie>::iterator it = collection.begin();
  //this loop iterates through the linked list
  for(it = collection.begin(); it != collection.end(); it++){
    //this if statement checks to see if the user inputted name is equal
    //to the director name in each movie struct 
    if (it->director == name){
      //the following lines print the movie information
      cout << "Title: " << it->title << endl;
      cout << "Director: " << it->director << endl;
      cout << "Runtime: " << it->runtime << " minutes" << endl;
      cout << "Format: " << it->format << endl;
      cout << "Price: $" << it->price << endl;
      cout << "Year: " << it->year << endl;
    }
  }
}

void Library::print(){ //might want to make this look better and make the decimals not disappear
  //declares an iterator variable to travel through the list
  list<movie>::iterator it;
  for(it = collection.begin(); it != collection.end(); it++){
    cout << "Title: " << it->title << endl;
    cout << "Director: " << it->director << endl;
    cout << "Runtime: " << it->runtime << " minutes" << endl;
    cout << "Format: " << it->format << endl;
    cout << "Price: $" << it->price << endl;
    cout << "Year: " << it->year << endl; 
  }
}
