/*
 Author: Jakub Czachor
 Course: CSCI-136
 Instructor: Anoop Aroor
 Assignment: Lab1A
 
 Finds leap year
 */
#include <iostream>
using namespace std;
int main()
{
    int year;
    
    cout << "Pleas enter a year: "; //Asks user for input
    cin >> year;
    if (year%4 != 0){
        cout << "Common Year \n";
        return 0;
    }
    if (year%100 == 0){ // makes sure if year is divisible by 100, it is also divisible by 400
        if (year%400 == 0){
            cout << "Leap Year \n";
            return 0;
        }
        else {
            cout << "Common Year \n";
            return 0;
        }
    }
    else{ //Else prints leap year
        cout << "Leap Year \n";
        return 0;
    }
}
