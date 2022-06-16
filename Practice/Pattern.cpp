#include <iostream>
using namespace std;


//start writing your main code

void Pattern1(int n);
void Pattern2(int n);

int main(){
    
    //Pattern1(5);
    Pattern2(5);
    return 0;
}

void Pattern1(int n){
    /* for (int i = 0; i < n; i++)
    {
        cout<<i<<endl;
    } */
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            cout<<"* ";
        }
        cout<<"\n";
        
    }
    
}

void Pattern2(int n){
    
    for (int row = n; row > 0; row--)
    {
        for (int col = 0; col < row; col++)
        {
            cout<<"* ";
        }
        cout<<"\n";
        
    }
    
}