/*
 Author: Jakub Czachor
 Course: CSCI-136
 Instructor: Anoop Aroor
 Assignment: Lab 3D
 
This file prints out the elevation in reverse order.
 
 */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <string>
using namespace std;

int main() {
  string date, date0, date1, arryDate[370];
  double eastSt, eastEl, westSt, westEl, arryWest[370]; 
  bool x = false; 

  cout << "Please enter the first date: "; 
  cin >> date0;
  cout << "Please enter the second date: ";
  cin >> date1;

  ifstream fin("Current_Reservoir_Levels.tsv");

  if (fin.fail()) 
    {
    cout << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
    }

string junk;        // new string variable
getline(fin, junk); 
int y = 0;

while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) 
 {
    fin.ignore(INT_MAX, '\n');
    arryDate[y] = date; //Sets up array
    arryWest[y] = westEl;
    y++;
 }
for(int i = 369; i >= 0; i--)
  {
    if (date1 == arryDate[i])
      {
        x = true; //Once loop reaches first date
      }
    
    if(x == true) //Prints out dates in reverse order
      {
        cout << arryDate[i] << "    " << arryWest[i] << "\n";
      }

    if (date0 == arryDate[i])
      {    
        x = false; //Once loops reaches second date
      }  

    }

  fin.close();
 
 }
