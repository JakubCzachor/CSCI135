/*
 Author: Jakub Czachor
 Course: CSCI-136
 Instructor: Anoop Aroor
 Assignment: Lab 4E
 
Prints a triangle with user specified size.
 */

#include <iostream>
using namespace std;

int main() {

  int size;

  cout << "Enter size of triangle: ";
  cin >> size;

  cout << "Shape: \n";

 for(int num0 = size; num0 > 0; num0--)
  {
   for(int space = size-num0; space > 0; space--) //Prints number of spaces
    {
     cout << " ";
    }
   for(int star = 0; star<num0; star++) //Prints number of stars
    {
     cout << "*";
    }
   cout << "\n";
  }
}
