#include <iostream>
using namespace std;


class LowerTraingle{
    private:
        int n;
        int *A;
    public:
        LowerTraingle(int n){
            this->n= n;
            A = new int[n];
        }
        ~LowerTraingle(){delete []A;}
        //For Col-major Formual
        void colSet(int i, int j, int ele);
        int colGet(int i, int j);
        void colDisplay();

        //For Row-major Formula
        void rowSet(int i, int j, int ele);
        int rowGet(int i, int j);
        void rowDisplay();
};

void LowerTraingle::colSet(int i, int j, int ele){
    if(i>=j){
        int t = (n*(j-1)-((j-2)*(j-1)/2) + (i-j));
        A[t] = ele;
    }
}

int LowerTraingle::colGet(int i, int j){
    if(i>=j){
        int t = (n*(j-1)-((j-2)*(j-1)/2) + (i-j));
        return A[t];
    }
    else{
        return 0;
    }
}

void LowerTraingle::colDisplay(){
    int i, j;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            if (i>=j)
            {
                int t = (n*(j-1)-((j-2)*(j-1)/2) + (i-j));
                cout<<A[t]<<" ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
        
    }
    
}

//For Row-major formula
void LowerTraingle::rowSet(int i, int j, int ele){
    if(i>=j){
        int t = (i*(i-1)/2)+(j-1);
        A[t] = ele;
    }
}

int LowerTraingle::rowGet(int i, int j){
    if(i>=j){
        int t = (i*(i-1)/2)+(j-1);
        return A[t];
    }
    else{
        return 0;
    }
}

void LowerTraingle::rowDisplay(){
    int i, j;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            if (i>=j)
            {
                int t = (i*(i-1)/2)+(j-1);
                cout<<A[t]<<" ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;  
    }
}

int main() {
    int d;
    cout<<"Define the Dimension: "<<endl;
    cin>>d;

    //LowerTraingle l(d);
    LowerTraingle lm(d);

    int x, i, j;
    /* cout<<"Enter all the the element"<<endl;
    for ( i = 1; i <= d; i++)
    {
        for ( j = 1; j <= d; j++)
        {
            cin>>x;
            l.colSet(i, j, x);
        }
        
    }
    cout<<endl;
    l.colDisplay(); */

    cout<<"Enter all the the element"<<endl;
    for ( i = 1; i <= d; i++)
    {
        for ( j = 1; j <= d; j++)
        {
            cin>>x;
            lm.rowSet(i, j, x);
        }
        
    }
    cout<<endl;
    lm.rowDisplay();

    


    return 0;
}
