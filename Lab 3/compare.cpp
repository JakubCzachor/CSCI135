/*
 Author: Jakub Czachor
 Course: CSCI-136
 Instructor: Anoop Aroor
 Assignment: Lab 3C
 
This file gets the min and max values of Current Reservoir Levels.tsv

 
 */


#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <string>
using namespace std;


int main() {
  string date;
  string date0;
  string date1;
  double eastSt;
  double eastEl;
  double westSt;
  double westEl; 
  bool x = false; 

  cout << "Please enter the first date: "; 
  cin >> date0;
  cout << "Please enter the second date: ";
  cin >> date1;

  ifstream fin("Current_Reservoir_Levels.tsv");
if (fin.fail()) {
    cout << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
}

string junk;        // new string variable
getline(fin, junk); 

 while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) 
 {

    if (date == date0)
    {
    x = true;
    }
  
   fin.ignore(INT_MAX, '\n'); // this loop reads the fileline-by-line
                              //extracting 5 values on eachiteration 
 
  if(x == true)
  {
    if (westEl > eastEl)
    {
      cout << date << " West \n"; //If west is higher
    }
    else if (eastEl > westEl)
    {
      cout << date << " East \n"; //If East is higher
    }
    else
    {
      cout << date << " Equal \n"; //If they are equal
    }
    
  }
   if (date == date1)
   {
    x = false; //Once loops reaches second date
   }  

 
 }

}
