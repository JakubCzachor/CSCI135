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
    int z;
    int min1;
   
    
    cout << "Please enter a number: "; //Asks user for input
    cin >> x;
    cout << "Please enter a second number: ";
    cin >> y;
    cout << "Please enter a third number: ";
    cin >> z;
    while ((y==x) || (x==z) || (y == z)){ //Makes sure none of them are equal
        cout << "Please enter a number: ";
        cin >> x;
        cout << "Please enter a second number: ";
        cin >> y;
        cout << "Please enter a third number: ";
        cin >> z;
    }
    if (x>y){ // compares x and y
        min1 = y;
    }
    else{
        min1 = x;
    }
    if (min1 < z){ //compares min1 to z
        cout << "The Smallest number is: " << min1 << "\n";
    }
    else if(z < min1){
        cout << "The Smallest number is: " << z << "\n";
    }}
