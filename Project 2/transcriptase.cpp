
/*
 Author: Jakub Czachor
 Course: CSCI-136
 Instructor: Anoop Aroor
 Assignment: Project 21
 This program takes a strings of DNA from file dna.txt and prints the RNA complements for them.
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;

char DNAbase_to_mRNAbase(char x)
{
 
    char z = toupper(x); //Makes letters capital
    char comp; //New Char
 
    if (z == 'A')
    {
        comp = 'U';
    }
 
    else if (z == 'T'){
        comp = 'A';
    }
 
    else if (z == 'C'){
        comp = 'G';
    }
 
    else{
        comp = 'C';
    }
 
    return comp; //The complement is returned.
 
}

string DNA_to_mRNA(string dna)
 
{
 
    string dna0; //New string
 
    for(int i = 0; i < dna.length(); i++) //For every character
    {
     
        char char0 = dna[i];
        dna0 += DNAbase_to_mRNAbase(char0);
     
    }
 
    return dna0;
 
}
int main() {
    
    ifstream fin("dna.txt");
 
    if (fin.fail())
    {
        cerr << "File cannot be read, opened, or does not exist.\n";
        exit(1);
    }
 
    string strand;
 
    while(getline(fin, strand)) //Prints out for multiple lines of DNA strands
    {
        cout << DNA_to_mRNA(strand) << endl;
    }
 
    fin.close();
}

