#include <iostream>
using namespace std;

//Template Example

template <class T>
class vector
{

public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }

    T dotV(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

/* 
class vector
{

public:
    int *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new int[size];
    }

    int dotV(vector &v)
    {
        int d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
 */

//Code Working:
/* 
0+ = 4 * 1
0+4+ = 3 * 0
0+4+0 = 1 * 1
0+4+0+1 = 5

return 5
 */

int main() {
    /* vector v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;

    vector v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 0;
    v2.arr[2] = 1;

    int a = v1.dotV(v2);
    cout<<a<<endl;
 */
    //Use of template in main()
    vector <float> v1(3);
    v1.arr[0] = 4.3;
    v1.arr[1] = 3.2;
    v1.arr[2] = 1.4;

    vector <float> v2(3);
    v2.arr[0] = 1.5;
    v2.arr[1] = 6.6;
    v2.arr[2] = 7.0;

    float a = v1.dotV(v2);
    cout << a << endl;
    return 0;
}