/*
 Author: Jakub Czachor
 Course: CSCI-136
 Instructor: Anoop Aroor
 Assignment: Lab 4C
 
Prints a cross with user specified size.
 */


#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int size;
  cout << "Enter size of cross: ";
  cin >> size;
  cout << "\n Shape: \n";
  for(int col = 1; col<= size; col++)
    {
      for(int row = 1; row <= size; row++)
        {
          if((col == row) || (row == (size + 1) - col)) //If row # matches col number or if size + 1 - col matches row number
            {
              cout << "*";
            }
          else
            {
              cout << " ";
            }
        } 
      cout << "\n";
    }
}
