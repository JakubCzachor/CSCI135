/*
 Author: Jakub Czachor
 Course: CSCI-136
 Instructor: Anoop Aroor
 Assignment: Lab 3A
 
Prints storage in east basin.
 
 */




#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>

using namespace std;


int main() {
  string date;
  double eastSt;

  string date0;
  cout << "Enter Date: ";//Input
  cin >> date0; 

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
    fin.ignore(INT_MAX, '\n');
    if (date0 == date){
      cout << "East Basin Storage: " <<  eastSt << " Billion Gallons"; //Checks to make sure the values are equal and when they are, it prints the basin storage that day
      return 0;
    }

}
}
