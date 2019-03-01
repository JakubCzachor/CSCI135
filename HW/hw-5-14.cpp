

/*
 Author: Jakub Czachor
 Assignment: Homework 5.14
 Instructor: Anoop Aroor

File that swaps the values of a and b if a is greater than b and otherwise leaves a and b unchanged. 

 */


#include <iostream>
using namespace std;
void sort2(int& a, int& b, bool& z){

    int x;
    int y;
    z = false;
    x = a;
    y = b;

    if (a > b) //If a is greater than b, the values switch and z is true
      {
        a = y;
        b = x;
        z = true;
      }
    else //Everything stays the same if a is not greater than b
      {
        return;
      }
}
int main() {

    int a;
    int b;
    bool z = false;

    cout << "Enter integer 1: "; //Inputs for integer 1&2
    cin >> a;
    cout << "\nEnter integer 2: ";
    cin >> b;

    sort2(a, b, z); //Calls function

    if (z == false)
      {
        cout << "a is still: " << a << "\nb is still: " << b;
      }

    else if (z == true)
      {
        cout << "a is now: " << a << "\nb is now: " << b;
      }
    
}
