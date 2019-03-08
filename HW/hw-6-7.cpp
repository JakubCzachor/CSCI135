/*
Author: Jakub Czachor
Course: CSCI-136
Instructor: Anoop Aroor
Assignment: HW E6.7
Take a row of integers and reverse
*/


#include <iostream>
using namespace std;



void reverse(int arry0[], int num0)
{
  int arry1[num0];
  
  for(int i = 0; i<=num0; i++)
    {
      arry1[i] = arry0[num0-i]; //Reverses array
    }

  for(int z = 0; z<=num0; z++) //Sets the first array equal to the second one
    {
      arry0[z] = arry1[z];
    }
}

int main(){

  int int0;

  cout << "Enter number of integers: ";
  cin >> int0;

  int Dataa[int0];
  
  cout << "Enter " << int0 << " Integers: " << endl;

  for(int i = 0; i<int0; i++) 
    {
      cin >> Dataa[i]; //Input of integers
    }
  reverse(Dataa, int0);

  for(int y = 1; y<=int0; y++)
    {
      cout << Dataa[y] << " ";
    }
}
