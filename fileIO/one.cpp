#include <iostream>
#include <fstream>
using namespace std;

//File I/O: Reading and Writing.
/*
The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream --> fstreambase (for input)
3. ofstream --> fstreambase (for output)
 */

/* 
In order to work with files in C++, you wll have to open it. 
Primarily, there are 2 ways to open a file:
1. Using the constructor
2. Using the member function open() of the class.
 */

int main() {
    string st = "Eliger Clifstee";
    string st2;

/*     //OPening file using constructor and writing it.
    ofstream out("sample1.txt");    //Write Operation
    out<<st;    //To write into file.
     */

    // OPening file using constructor and reading it.
 /*    ifstream in("sample2.txt"); // Read Operation
    //in >> st2;                   // To write into file.
    getline(in, st2);   //getline() is used to read complete first line.
    cout<<st2<<endl;    //Here we can only read the word before the space. The first word only.
 */
    return 0;
}