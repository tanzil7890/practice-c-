#include <iostream>
#include <fstream>
using namespace std;

//FIle I/O: open() & eof()


int main() {

    ofstream fout;
    fout.open("sample1.txt");   //To open any file using open
    fout<<"I am coming for you!\n";
    fout << "I am coming for you!\n";
    fout << "I am coming for you!\n";

    for (int i = 0; i < 50; i++)
    {
        fout << "I am coming for you!\n";
    }
    
    fout.close();   //To close the file using .close()
   
   ifstream fin;
   fin.open("sample1.txt");
   string str1;
   //fin >> str1;
   //cout << str1 << endl;
/* 
   for (int i = 0; i < 10; i++)
   {
       fin >> str1;
       cout << str1<<endl;
   }
   
    */

   //eof() is known as end of file
   //it will read till the end of the the file/
   while (fin.eof() == 0)
   {
    getline(fin, str1);
    cout<<str1<<endl;
   }
   
   fin.close();
    return 0;
}