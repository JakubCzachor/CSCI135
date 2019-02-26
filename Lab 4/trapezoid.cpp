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

  int width;
  int height;
  int spaces = 0;

  cout << "Enter width: ";
  cin >> width;
  cout << "Enter height: ";
  cin >> height;


  if ((height*2)-1>width)
    {
    cout << "Impossible shape"; //Checks to make sure the trapazoid is possible
    }
  else
    {
      cout << "Shape: \n";
      while(height > 0)
        {
          if(spaces == height)
            {
              return 0;
            }
          for(int space = 0; space < spaces; space++) //Number of spaces
            {
              cout << " ";
            }
            for(int star = 0; star < width; star++) //Number of stars
            {
              cout << "*";
            }
            cout << "\n";
            width = width - 2;
            spaces++; 

        }
      }
}
