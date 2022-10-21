#include <iostream>
#include "library.h"

using namespace std;

int main()
{
  Library l;
  l.read_from_file("collection.txt");
  l.print();
  //l.push_front("Something", "Something", 100, "DVD", 10.50, 2004); 
  //l.print(); 

  return 0;
}
