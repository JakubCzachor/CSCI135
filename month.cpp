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
    int leap;
    int month;
    cout << "Pleas enter a year: "; //Asks user for input
    cin >> year;
    cout << "Please enter a month: ";
    cin >> month;
    if (year%4 != 0){
        leap = 0;
    }
    if (year%100 == 0){ // makes sure if year is divisible by 100, it is also divisible by 400
        if (year%400 == 0){
            leap = 1;
        }
        else {
            leap = 0;
        }
    }
    else if(year %4 == 0){ //Else prints leap year
        leap = 1;
    }
    if (month == 2){ //Checks if Month = February
        if (leap == 1){
            cout << "29 Days \n";
            return 0;
        }
        else{
            cout << "28 Days \n";
            return 0;
        }
    }
    else {
        if ((month == 1) || (month == 3) || (month ==5) || (month ==7) || (month ==8) || (month == 10) || (month ==12)) //Checks if Month is divisible by 2
        {
            cout << "31 Days \n";
            return 0;
        }
        else{
            cout << "30 Days \n";
            return 0;
        }
    }
    
}
