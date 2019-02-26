/*
 Author: Jakub Czachor
 Course: CSCI-136
 Instructor: Anoop Aroor
 Assignment: Lab 2c
 
 Changes an array
 */
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    
    int fib[60];
    fib[0]=0;
    fib[1]=1;
    cout << fib[0] << "\n" << fib[1] << "\n";
    
    for(int i = 2; i<60; i++){ //Starts loop at 2 because 0, 1 have already been outputted.
        fib[i] = fib[i-1] + fib[i-2];
        cout << fib[i] << "\n";
        //Numbers are getting too big for int;
    }
    
        
}

