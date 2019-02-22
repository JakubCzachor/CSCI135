
/*
 Author: Jakub Czachor
 Course: CSCI-136
 Instructor: Anoop Aroor
 Assignment: Lab 4B
 
 Prints out a rectangle made of stars based on user input
 
 */

#include <iostream>
using namespace std;

int main()
{
    int height;
    int width;
    
    cout << "Enter height: "; //Input
    cin >> height;
    cout << "Enter width: ";
    cin >> width;
    cout << "\n";
    
    for(int b = 0; b<width; b++) //Number of rows
    {
        for(int a = 0; a<height; a++) //Number of columns
        {
            if((b % 2 == 0) && (a % 2 ==1))//Even Row Odd coll
            {
                cout<< " " ;
            }
            if((b % 2 == 0) && (a % 2 == 0))//Even Row Even Coll
            {
                cout << "*";
            }
            if((b % 2 == 1) && (a % 2 == 0)) //Odd Row Even Coll
            {
                cout<<  " ";
            }
            if((b % 2 == 1) && (a % 2 ==1))
            { //Odd Row Odd Coll
                cout<< "*";
            }
            
        }
        
        cout << "\n"; //New line every time row is done
        
    }
}
