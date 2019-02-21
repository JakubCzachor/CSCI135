/*
 Author: Jakub Czachor
 Course: CSCI-136
 Instructor: Anoop Aroor
 Assignment: Homework 8.1
 
 Opens hello.txt, writes Hello, World! to the file, closes file, then reopens and prints the string
 
 */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
    
    ofstream outFile;
    outFile.open("hello.txt");
    
    outFile << "Hello, World!" << endl; //Adds hello, world to the file
    
    outFile.close(); //Closes file
    
    ifstream inFile;
    inFile.open("hello.txt"); //Reopens file
    
    string string0, string1;
    
    inFile >> string0 >> string1; 
    cout << string0 << " " << string1; //prints out string
    
}
