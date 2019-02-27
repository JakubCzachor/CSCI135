/*
Author: Jakub Czachor
Assignment: Lab 4G
Instructor: Anoop Aroor

This File prints out a checkerboard from user input.
*/
#include <iostream>
using namespace std;

int main() 
{
  int col;
  int row;
  cout << "Enter Col #: ";
  cin >> col;
  cout << "Enter Row #: ";
  cin >> row;
  cout << "\n";
  string str0 = "";
    for (int num0 = 0; num0 < row; num0++)  //Number of rows
    {
      for (int num1 = 0, chr = '*'; num1 < col; num1++, chr = '*')  //Number of Colms
      {
        if(((num1 / 3) & 1) ^ ((num0 / 3) & 1)) 
          chr = ' ';
          str0 += (char)chr;
      }
      str0 += '\n';
    }
    cout << str0;
}
