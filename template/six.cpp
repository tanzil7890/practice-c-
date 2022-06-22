#include <iostream>
using namespace std;

//Overloading Template Function

template <class T>
class Demo{
    public:
        T data;
        //Demo (T a): data(a);
        Demo(T a): data(a) {}
        /* void display(){
            cout<<data<<endl;
        }
        
 */
        void display();
};

template <class T>
void Demo<T> :: display(){
    cout<<data;
}

void func(int a){
    cout<<"I am first func() "<<a<<endl;
}

template <class T>
void func(T a){
    cout<<"I am templated func() "<<a<<endl;
}

int main() {
    //Demo<int> d1(90);
  /*   
    Demo<char> d1('T');
    cout<<d1.data<<endl;
    d1.display();
     */
    func(10);   //Exact match takes highest priority
    func<char>('A');


    return 0;
} 

