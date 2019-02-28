/*
Author: Jakub Czachor
Assignment: Lab 5A
Instructor: Anoop Aroor

The program should also have a main function that tests your code. For example, it can ask the user to input two integer numbers and print Yes if the first number is divisible by the second, otherwise print No.
*/
#include <iostream>
using namespace std;
bool isDivisibleBy(int n, int d){
    if(d == 0)
     { //Cannot divide by 0
        return false;
     }
  else if (n % d == 0) //If N is divisbile by D it is true
    {
      return true;
    }
  else
    {
      return false; //If it is not divisible by D, it is false
    }
}
int main() 
{

  int num0;
  int num1;

  cout << "Enter an integer: ";
  cin >> num0;
  cout << "Enter a second integer: ";
  cin >> num1;

  while(num1 != 0) //Cannot divide by 0.
    {
      bool x = isDivisibleBy(num0, num1);

      if (x == true)
        {
          cout << "Yes";
        }
      else if (x == false)
        {
          cout << "No";
        }
    }
}
