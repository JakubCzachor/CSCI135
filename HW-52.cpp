/*
 Author: Jakub Czachor
 Course: CSCI-136
 Instructor: Anoop Aroor
 Assignment: Homework 5.2
 
Finds value in a bank account after x number of years given an interest percentage and initial value.
 */


#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double year;
  double v0;
  double i0;
  double i1;
  double total;

cout << "Enter initial value: ";
cin >> v0;

cout << "Enter interest percentage: ";
cin >> i0;
i1 = (i0/100); //Converts percentage into decimal

cout << "Enter number of years: ";
cin >> year;

total = v0 * (pow(1 + i1, year)); //Interest rate raised to the power of year
cout << total;

}
