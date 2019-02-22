/*
 Author: Jakub Czachor
 Course: CSCI-136
 Instructor: Anoop Aroor
 Assignment: Lab 4A
 
 Prints out a rectangle made of stars based on user input
 
 */

#include <iostream>
using namespace std;

int main() 
{
  int height;
  int width;
  cout << "Enter height: ";
  cin >> height;
  cout << "Enter width: ";
  cin >> width;
    cout << "\n";
  for(int i = 0; i<width; i++) //Number of rows
    {
    for(int y = 1; y<=height; y++)
      { //Number of columns
        cout << "*";
      }
    cout << "\n";
    }
}
