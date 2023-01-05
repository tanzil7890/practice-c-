#include <iostream>
using namespace std;

/* 

M = [
3 0 0 0 0
0 7 0 0 0
0 0 4 0 0
0 0 0 9 0
0 0 0 0 6
]

*/
class Diagonal{
    private:
        int n;
        int *A;
    
    public:
        Diagonal(int n){
            this->n = n;
            A = new int[n];
        }
        ~Diagonal(){delete []A;}

        void Set(int i, int j, int ele);
        int Get(int i, int j);
        void Display();
        
};

void Diagonal::Set(int i, int j, int ele){
    if(i==j)
    {
        A[i-1]= ele;
    }
}

int Diagonal::Get(int i, int j){
    if (i==j)
        return A[i-1];
    else
        return 0;
}

void Diagonal::Display(){
    for (int i = 0; i < (n); i++)
    {
        for (int j = 0; j < (n); j++)
        {
            if(i==j)
                cout<<A[i]<<" ";
            else
                cout<<"0 ";
        }
        cout<<endl;
        
    }
    
}


int main() {
    Diagonal d(4);
    d.Set(1, 1, 5);
    d.Set(2, 2, 10);
    d.Set(3, 3, 15);
    d.Set(4, 4, 20);
    d.Display();
    //cout<<
    return 0;
}


