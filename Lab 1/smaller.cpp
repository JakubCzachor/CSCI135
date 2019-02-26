/*
 Author: Jakub Czachor
 Course: CSCI-136
 Instructor: Anoop Aroor
 Assignment: Lab1A
 
 Takes two numbers and prints the smallest one
 */
#include <iostream>
using namespace std;
int main()
{
    int x;
    int y;
    cout << "Please enter a number: ";
    cin >> x;
    cout << "Please enter a second number: ";
    cin >> y;
    if (x > y) { // Compares the two values
        cout << "The smaller of the two numbers is: " << y << "\n" ;
    }
    else if (y > x) { // Compares the two values
        cout << "The smaller of the two numbers is: " << x << "\n";
    }
    else {
        cout << "The numbers are equal \n" ;
    }
}

