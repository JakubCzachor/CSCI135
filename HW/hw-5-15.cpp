
/*
 Author: Jakub Czachor
 Assignment: Homework 5.15
 Instructor: Anoop Aroor

Write a function
sort3(int& a, int& b, int& c)
that swaps its three arguments to arrange them in sorted order. For example,

 */


#include <iostream>
using namespace std;

void sort2(int& a, int& b){

    int x;
    int y;
    x = a;
    y = b;
    
    if (a > b) //If a is greater than b, the values switch and z is true
      {
        a = y;
        b = x;
      }
    else //Everything stays the same if a is not greater than b
      {
        return;
      }
}

void sort3(int& num0, int& num1, int& num2){ //Calls sort2 multiple times to sort each value.
  if (num0 > num1)
    {
      sort2(num0, num1);
    }
  if(num0 > num2)
    {
      sort2(x,xxx);
    }
  if(num1 > num2)
    {
      sort2(num1, num2);
    }
}

int main() {

    int a;
    int b;
    int c;

    cout << "Enter integer 1: "; //Inputs for integer 1,2, &3
    cin >> a;
    cout << "\nEnter integer 2: ";
    cin >> b;
    cout << "\nEnter integer 3: ";
    cin >> c;

    sort3(a, b, c); //Calls function

      {
        cout << "a is: " << a << "\nb is: " << b << "\nc is: " << c;
      }
    
}
