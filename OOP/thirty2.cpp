#include <iostream>
using namespace std;

//Array of Object using Pointers

class Kirana{
    int id;
    float price;
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }

        void getData(void){
            cout<<"Code of this item is "<<id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }

};


int main() {
    int size = 3;
    //int *ptr = size;
    //int *ptr = new int [34];
    //Name of the store: general store, veggies, hardware.


    //To create a block of memory.
    Kirana *ptr = new Kirana[size];
    // Here we have created ptrTemp and gave the address of ptr because after the first loop ptr will be at last index, but we have to print the value from the beginning by using another loop. So we used ptrTemp to store the address of ptr..
    Kirana *ptrTemp = ptr;  
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the id and price of the item "<<i+1<<endl;
        cin>>p>>q;
        //(*ptr).setData(p, q);
        ptr->setData(p, q);
        ptr++;
    }

    for (int  i = 0; i < size; i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    
    


/* 
    for (int i = 0; i < size; i++)
    {
        ptr->setData(i+10, i+20);
        ptr->getData();
    }
     */
    return 0;
}