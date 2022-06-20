#include <iostream>
#include <fstream>
using namespace std;

//File I/O: Read & Write to a file  & Closing file.


int main() {

  /*   //Connecting our file with fout stream
    ofstream fout("sample1.txt");

    //Creating a name string and filling it with the string entered by the user.
    string name;
    cout<<"Enter your name: ";
    cin>>name;
 */
    //Writing a string to the file
    //fout<<"My name is " + name;
    
    //fout.close();

    ifstream gave("sample1.txt");
    string take;
    //gave>>take;     //USed to get only one word until space.
    getline(gave, take);    //USed to get the complete line
    cout<<"The string inside the file is: "<<take;


    return 0;
}