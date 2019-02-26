/*
 Author: Jakub Czachor
 Course: CSCI-136
 Instructor: Anoop Aroor
 Assignment: Lab 2a
 
 Squares numbers
 */
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int x;
    int y=true;
    cout << "Please Enter A Value: ";
    cin >> x;
    do{
    if(x>0 && x<100){ //Checks to make sure value is between 100 and 0
        y = x*x; //Squares value
        cout << "Number squared is: " << y << "\n";
        y=false;
        return 0;
        }
    else{
        cout << "Re-Enter a Value: ";
        cin >> x;
    }}while((y=true)); //Do While Loop
    return 0;
}
    

