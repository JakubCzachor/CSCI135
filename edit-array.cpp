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
    int z = 10;
    int v;
    int i;

    int myData[10];
    for(int y=0; y<z; y++){
        myData[y] = 1;
    }
    do{ //Loop
        for(int y=0; y<z; y++){
            cout << myData[y] << " " ;
        }
        
        
        cout << "\n";
        cout << "Enter a cell number i: ";
        cin >> i;
        cout << "Enter its new value: ";
        cin >> v;
        
        if ((i >= 0) && (i < 10)){ //Checks to make sure that the values are in range
            myData[i] = v;
        }
    }
        
    while((i >= 0) && (i < 10)); //Checks to make sure i is between 10 and 0
    cout << "Index out of range. Exit \n";
    
    
}

