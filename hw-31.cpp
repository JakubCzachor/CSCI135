
/*
Author: Jakub Czachor
Course: CSCI-136
Instructor: Anoop Aroor
Assignment: Homework 3.1

This program takes an integer from the user and prints whether it is negative, positive, or zero.

*/

#include <iostream>
using namespace std;

int main() {
  int num0; 
  cout << "Please enter an integer: ";
  cin >> num0;
    if(num0 == 0) //Checks if = to 0
    {
      cout << "Zero";
      return 0;
    }
    if (num0 > 0){ //If Positive
      cout << "Positive";
      return 0;
    }
    if (num0 < 0) //If Negative
    {
      cout << "Negative";
      return 0;
    }
  
}
