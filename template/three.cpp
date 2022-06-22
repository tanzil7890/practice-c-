#include <iostream>
using namespace std;

//Template Multiple Parameter
/* 
CLASS tEMPLATE wITH mULTIPLE pARAMETERS (ONE, TWO OR MORE THAN TWO)
template <class T1, class T2,.......>
class nameOfClass{
    //body
}

 */

template <class T1, class T2>
class nameOfMyClass{
    public:
        T1 data1;
        T2 data2;

        nameOfMyClass(T1 a, T2 b){
            data1 = a;
            data2 = b;
        }

        void display(){
            cout<<this->data1<<endl<<this->data2<<endl;
        }
};

int main() {
    //Here obj is an object of the class nameOfMyClass.
    nameOfMyClass<int, char> obj(2, 'T');
    obj.display();

    return 0;
}