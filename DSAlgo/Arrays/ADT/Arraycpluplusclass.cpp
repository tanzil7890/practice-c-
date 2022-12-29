/* #include <iostream>
using namespace std;


class Array{
    private:
        int *A; //To dynamically create an array.
        int size;   //Size of an array I want
        int length; //Number of elements that are present in the array
    
    public:
        Array() //Non-parameterized constructor
        {
            size=10;
            A = new int[10];
            length = 0;
        }
        Array(int sz){
            size = sz;
            length = 0;
            A = new int[size];
        }
        ~Array(){
            delete []A;
        }

        //Function
        void Display();
        void Insert(int index, int x);
        int Delete(int index);
};

void Array::Display(){
    for (int i = 0; i<length; i++)
        cout<<A[i]<<" ";
    cout<<endl;
}

void Array::Insert(int index, int x){
    if (index>=0 && index<=length)
    {
        for(int i=length-1; i>=index; i--)
            A[i+1] = A[i];
        A[index] = x;
        length++;    
    }
}

int Array::Delete(int index){
    int x=0;
    if (index>=0 && index < length){
        x=A[index];
        for (int i = index; i<length-1; i++)
            A[i] = A[i+1];
        length--;
    }
    return x;
}

int main() {
    Array arr(10);
    arr.Insert(0, 5);
    arr.Insert(1, 6);
    arr.Insert(2, 9);
    arr.Insert(2, 91);
    arr.Display();

    cout<<arr.Delete(0)<<endl;
    arr.Display();

    return 0;
}
 */

//Using Template

#include <iostream>
using namespace std;

template<class T>

class Array
{
    private:
        T *A; //To dynamically create an array.
        int size;   //Size of an array I want
        int length; //Number of elements that are present in the array
    
    public:
        Array() //Non-parameterized constructor
        {
            size=10;
            A = new T[10];
            length = 0;
        }
        Array(int sz){
            size = sz;
            length = 0;
            A = new T[size];
        }
        ~Array(){
            delete []A;
        }

        //Function
        void Display();
        void Insert(int index, T x);
        T Delete(int index);
};

template <class T>
void Array<T>::Display(){
    for (int i = 0; i<length; i++)
        cout<<A[i]<<" ";
    cout<<endl;
}

template <class T>
void Array<T>::Insert(int index, T x){
    if (index>=0 && index<=length)
    {
        for(int i=length-1; i>=index; i--)
            A[i+1] = A[i];
        A[index] = x;
        length++;    
    }
}

template <class T>
T Array<T>::Delete(int index){
    T x=0;
    if (index>=0 && index < length){
        x=A[index];
        for (int i = index; i<length-1; i++)
            A[i] = A[i+1];
        length--;
    }
    return x;
}

int main() {
    Array<char> arr(10);
    arr.Insert(0, 'a');
    arr.Insert(1, 'b');
    arr.Insert(2, 'c');
    arr.Insert(2, 'd');
    arr.Display();

    cout<<arr.Delete(0)<<endl;
    arr.Display();

    return 0;
}