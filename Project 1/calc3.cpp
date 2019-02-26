/*
 Author: Jakub Czachor
 Course: CSCI-136
 Instructor: Anoop Aroor
 Assignment: Project 1D
 
 Advanced +/- Calculator taking strings from a text file and computing the answer
*/

#include <iostream>
using namespace std;

int main() 
{	
	int num0 = 0;
  int sum = 0;
	char sum0; //Current Operation
	char sum1 = '+'; //Previous Operation
	cin >> num0;
	
	while (cin >> sum0) //While Loop
	{ 		
		if(sum0 == '^') //Checks for Exponent
		{
			num0 = num0 * num0;
			cin >> sum0;
		}
		if(sum1 == '+') //Checks for +
		{
			sum += num0;
		} 
		else if(sum1 == '-') //Checks for -
		{
			sum -= num0;
		}
		
		sum1 = sum0;
		cin >> num0;
		
		if(sum1 == ';') //Checks for semicolon
		{
			cout << sum << endl;
			sum = 0;
			sum1 = '+';
		}
	}
}
