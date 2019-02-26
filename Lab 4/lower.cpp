/*
 Author: Jakub Czachor
 Course: CSCI-136
 Instructor: Anoop Aroor
 Assignment: Lab 4D
 
Prints a triangle with user specified size.
 */


#include <iostream>
using namespace std;

int main() {
  int size;
  int num0 = 1;
  cout << "Enter size of triangle: ";
  cin >> size;
  cout << "\n Shape: \n";
  while(num0<=size)
    {
      for(int row = 1; row <= num0; row++)//For every row, it will continue to loop until row == num0.
        {
          cout << "*";
        } 
        num0+=1;
        cout << "\n";
    }


}
