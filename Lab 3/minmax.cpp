/*
 Author: Jakub Czachor
 Course: CSCI-136
 Instructor: Anoop Aroor
 Assignment: Lab 3B
 
This file gets the min and max values of Current Reservoir Levels.tsv

 
 */


#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>

using namespace std;


int main() {
  string date;
  double eastSt;
  double max0; //The Maximum
  double min0; //The Minimum
  bool x = true; 

  ifstream fin("Current_Reservoir_Levels.tsv");
if (fin.fail()) {
    cout << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
}

string junk;        // new string variable
getline(fin, junk); 

 while(fin >> date >> eastSt) {
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 
    while(x==true){ //Done so it runs once
      min0 = eastSt;
      x = false;
    }
    fin.ignore(INT_MAX, '\n');
    if (max0 <= eastSt){ //Checking for max
      max0 = eastSt;
    }
     if(min0 >= eastSt){ //Checking for min
      min0 = eastSt;
 }
 }
 

 //Checks to make sure the values are equal and when they are, it prints the basin storage that day
     //skips to the end of line, 
                          //ignorring the remaining columns 

    // for example, to print the date and East basin storage:
cout << "minimum storage in East basin: "<< min0 << "\n";
cout << "MAXimum storage in East basin: "<< max0;
}
