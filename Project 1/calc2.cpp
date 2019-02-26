/*
 Author: Jakub Czachor
 Course: CSCI-136
 Instructor: Anoop Aroor
 Assignment: Project 1C
 
 Advanced +/- Calculator taking strings from a text file and computing the answer
 */
#include<iostream>
using namespace std;
int main(){
    
    int num0;
    int strg;
    char sum0;
    cin >> strg;
    
    while(cin >> sum0 >> num0) //loops through text file
    {
        
        if(sum0 == '+')//if the sign is +, the following number is added
        {
            strg += num0;
        }
        
        else if(sum0 == '-')//if the sign is -, the following number is subtracted
        {
            strg -= num0;
        }
        else
        {
            cout << strg << "\n";
            strg = num0 ;
            
        }
        
    }
    
    cout << strg ; //outputs answer
    
}
