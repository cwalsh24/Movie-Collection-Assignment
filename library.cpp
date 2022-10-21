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
  }

  //closes the file stream.
  in.close();
}

void Library::print(){
  //declares an iterator variable to travel through the list
  list<movie>::iterator it;
  for(it = collection.begin(); it != collection.end(); it++){
    cout << it->title << endl;
    cout << it->director << endl;
  }
}
