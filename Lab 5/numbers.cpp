

/*
 Author: Jakub Czachor
 Assignment: Lab 5C
 Instructor: Anoop Aroor
 Prints the next prime number
 */

#include <iostream>
using namespace std;


bool isPrime(int num1)
{
    
    if(num1 > 1)
    {
        
        for(int num2 = 2; num2 < num1-1; num2++) //Loops through to find a prime
        {
            
            if(num1 % num2 == 0)
            {
                
                return false;
                break;
                
            }
        }
        
        return true;
        
    }
    
    else
    {
        
        return false;
        
    }
}

int nextPrime(int num1)
{
    
    num1+= 1;
    
    while(!isPrime(num1)) //While isPrime is not a prime
    {
        
        num1++; //Increments num1
        
    }
    
    return num1; //When isPrime has found a prime
    
}
int main(){
    int num0;
    
    cout << "Enter a number: ";
    cin >> num0;
    
    int num1 = nextPrime(num0);
    
    cout << "Next prime is: " << num1;
}
