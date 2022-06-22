#include <iostream>
#include <vector>   //To use vector in program.
using namespace std;

//vectors in c++
/* 
Syntax:
vector<dataType> objectName;
 */

template <class T>
void display(vector<T> &v){
    cout<<"Displaying the vector: "<<endl;
    for (int  i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        //cout<<v.at(i)<<" ";
    }
    cout<<endl;
    
}

int main() {
    vector<int> vec1;   //zero length vector.
    int element, size = 5;
    // vector<int>::iterator iter;
    /*
       cout<<"Enter the size of your vector "<<endl;
       cin>>size;
       for (int i = 0; i < size; i++)
       {
           cout<<"Enter an element to add to this  vector: ";
           cin>>element;
           vec1.push_back(element);
       }
       cout<<"Before: "<<endl;
       display(vec1);
       cout<<endl;
       // vec1.pop_back();     //Delete last element
       // vec1.push_back(40);   //Add element at the end

       vector<int>::iterator iter = vec1.begin(); // Using of iterator to use insert.
       // vec1.insert(iter+2, 666); // While using insert() it insert at the desired location and  automatically increase the size.
       vec1.insert(iter + 2, 666);  //To insert 5 copies of 666 in vec1

       //Using of erase() either element at one position or [first, last] position

       cout<<"After: "<<endl;
       display(vec1);
   */

    vector<char> vec2(4);    //four element character vector
    //vec2.push_back('T');
    //vec2.push_back('A');
    //vec2.push_back('N');
    //display(vec2);
    //Use of inserting in the block
    //vector<char>::iterator iter2;
    //iter2 = vec2.begin();
    //vec2.insert(iter2+vec2.size()-1, 5, 'Z');
    //cout<<"After:"<<endl;
    //vec2.pop_back();
    //display(vec2);

    vector<char> vec3(vec2);   //4-element character vector from vec2.
    //display(vec3);

    vector<int> vec4(4, 21);    //4 element of vector of 21s
    //cout<<"Before: "<<endl;
    //display(vec4);
    //cout<<vec4.size();    //To find size of the vector object.
    //vector<int>::iterator iter;
    //iter = vec4.begin();
    //vec4.insert(iter, 999);
    //cout<<"After inserting 999: "<<endl;
    display(vec4);


    return 0;
}