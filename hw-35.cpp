/*
 Author: Jakub Czachor
 Course: CSCI-136
 Instructor: Anoop Aroor
 Assignment: Homework 3.5
 
 Takes 3 values and outputs whether it is increasing, decreasing, or neither
 */


#include <iostream>
using namespace std;

int main() {
  int num0;
  int num1;
  int num2;

  while(cin >> num0 >> num1 >> num2) //Awaits input
  {
    if((num1 > num0) && (num2 > num1)) //Checks if increasing
      {
        cout << "Increasing \n";
      }
    else if((num1 < num0) && (num2 < num1)) //Checks if decreasing
      {
        cout << "Decreasing";
      }
    else
      {
        cout << "Neither";
      }
  }
}
