/*
 Author: Jakub Czachor
 Course: CSCI-136
 Instructor: Anoop Aroor
 Assignment: Project 1A
 
 Sums up all numbers in a text file
 */

#include<iostream>
using namespace std;

int main(){
    
    int num0;
    int sum = 0;
    while(cin >> num0) //loops through text file
    {
        sum += num0;//sums all numbers
    }
    cout << sum << endl; //prints sum
    
    return 0;
}


