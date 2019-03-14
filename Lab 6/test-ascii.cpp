
/*
 Author: Jakub Czachor
 Course: CSCI-136
 Instructor: Anoop Aroor
 Assignment: Lab 6A
 This program takes a string and prints out the ASCII values of the letters
 */

#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
  cout << "Enter a string: ";

  string s;
  getline(cin, s); //Allows for strings with spaces

  cout << "\n";

  for (int i = 0; i<s.length(); i++) //Loops through ever letter of the string

    {
      cout << s[i] << " " <<(int)s[i]; // String and ASCII value
      cout << "\n"; 
    }

}
