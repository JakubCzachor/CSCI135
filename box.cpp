/*
 Author: Jakub Czachor
 Course: CSCI-136
 Instructor: Anoop Aroor
 Assignment: Lab 4A
 
 Prints out a rectangle made of stars based on user input.
 
 */

#include <iostream>
using namespace std;

int main() 
{
 
  int height;
  int width;
 
  cout << "Enter height: "; //Input
  cin >> height;
  cout << "Enter width: ";
  cin >> width;
  cout << "\n";
 
  for(int row = 0; row < width; row++) //Number of rows
    {
    for(int colm = 1; colm <= height; colm++)//Number of columns
      { 
        cout << "*";
      }
    cout << "\n";
    }
}
