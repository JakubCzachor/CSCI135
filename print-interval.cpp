/*
 Author: Jakub Czachor
 Course: CSCI-136
 Instructor: Anoop Aroor
 Assignment: Lab 2b
 
 Prints numbers based on user given input
 */
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int L;
    int U;
    cout << "Please enter a Lower Bound: "; //Lower Bound
    cin >> L;
    cout << "Please enter an Upper Bound: "; //Upper Bound
    cin >> U;
    
    for(int i = L; i < U; i++) { //Loop
        cout << L << " ";
        L +=1;
        
    }

}
    

