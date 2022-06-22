#include <iostream>
#include <list>     //To use list functionalities in the program.
using namespace std;

//List STL

template <class T>
void display(list<T> &l1){
    list<int>::iterator it;

    cout<<"Started to display: "<<endl;
    for (it = l1.begin(); it!=l1.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
}

int main() {
    list<int> list1;    //list of 0 length
    list1.push_back(5);
    list1.push_back(3);
    list1.push_back(4);
    list1.push_back(789);
    list1.push_back(1);
    list1.push_back(1000);
    //list<int>::iterator iter;
    //iter = list1.begin();
    //cout<<*iter<<" ";
    //++iter;
    //cout<<*iter<<" ";

    //Sorting the list
    //list1.sort();

    //To reverse the list
    list1.reverse();

    display(list1);

    list<int> list2(4);  //Empty list of size 7.
    list<int>::iterator iter2;
    iter2 = list2.begin();
    *iter2 = 45;
    iter2++;
    *iter2 = 6;
    iter2++;
    *iter2 = 66;
    iter2++;
    *iter2 = 666;
    iter2++; 

    //Removing elements from the list
    //list2.pop_back();   //To pop the element from the back
    //list2.pop_front();  //To pop the element from the front
    //list2.remove(6);    //To remove the desired element. eg: if there is two element of same then all the same element will get removed.

  /*   for (iter2=list2.begin(); iter2!=list2.end(); iter2++)
    {
        cin>>*iter2;
    }
    */ 
    display(list2);
    //list1.sort();
    //list2.sort();
    
    //To merge the two list of elements.
    //list1.merge(list2);     //To merge the sorted list
    //cout<<"List 1 after merging"<<endl;
    //display(list1);

    list<char> list3(4);

    return 0;
}