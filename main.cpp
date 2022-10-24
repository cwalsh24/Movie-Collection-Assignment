#include <iostream>
#include "library.h"

using namespace std;

int main()
{
  Library l;
  l.read_from_file("collection.txt");
  l.print();
  l.write_to_file("test.txt");
  //l.push_back("Something", "Something", 100, "DVD", 10.50, 2004); 
  //l.print(); 

  return 0;
}
