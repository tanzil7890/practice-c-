#include <iostream>
#include <vector>
using namespace std;

// Vector

int main()
{
    /* V1 begins */
    vector<int> v1 = {10, 20, 30, 40, 50};
    int i;
    cout << "Display the element:";
    for (auto i = v1.begin(); i != v1.end(); i++)
        cout << *i << " ";

    cout << endl;
    for (auto i = v1.rbegin(); i != v1.rend(); i++)
    {
        cout << *i << " ";
    }

    /* ch for char begins */
    int element;
    vector<char> ch={'T', 'A', 'N', 'Z', 'I', 'L'};
    
    //vector<char>::iterator iter1;
    cout<<endl;
    for (auto i = ch.begin(); i!=ch.end(); i++)
    {
        cout<<char(*i+5)<<" ";
    }

    /* V2 begins */

    cout<<"\n"<<"For V2: "<<endl;
    vector<int> v2;
    for (int i = 0; i < 5; i++)
    {
        v2.push_back(i);
    }
    
    cout<<v2.size()<<endl;
    cout<<v2.capacity()<<endl;
    cout<<v2.max_size()<<endl;

    v2.resize(3);

    cout<<"After resize the size of v2: "<<v2.size();

    if(v2.empty()== false)
        cout<<"Is notempty"<<endl;
    else
        cout<<"Is empty"<<endl;
    
    for(auto i=v2.begin(); i!=v2.end(); i++)
        cout<<*i<<" ";

    /* V3 begins */
    cout<<"\n";

    vector<int> v3;
    for ( i = 1; i <= 10; i++)
    {
        int newI = i*10;
        v3.push_back(newI);
    }
    
    for(auto i=v3.begin(); i!=v3.end(); i++)
        cout<<*i<<" ";
    
    cout<<"\n\n"<<v3.at(3)<<endl;
    cout<<v3[2]<<endl;
    cout<<v3.front()<<endl;
    cout<<v3.back()<<"\n";

    //Pointer to the first element
    int *ptr = v3.data();
    cout<<"Pointer to the first element"<<*ptr<<endl;

    /* V4 Begin  */
    vector<int> v4;
    //To assign 10 five times in the vector.
    v4.assign(5, 10);
    cout<<"V4 Begins: "<<"\n";
    for(auto i=v4.begin(); i!=v4.end(); i++)
        cout<<*i<<" ";
    v4.push_back(9999);
    cout<<endl;
    for (auto i = v4.begin(); i != v4.end(); i++)
        cout << *i << " ";
    v4.pop_back();  //pop out the last element from the vector.
    //To insert 8888 at the begin() of the vector in v4.
    v4.insert(v4.begin(), 8888);
    cout<<"\n"<<v4[0]<<endl;

    //remove the first element
    v4.erase(v4.begin());
    cout<<"\n"<<v4[0]<<endl;

    //emplace: extend the container after inserting the value.
    v4.emplace(v4.begin(), 7777);
    cout<<"\n"<<v4[0]<<endl;

    //To insert 6666 at the end of the vector.
    v4.emplace_back(6666);
    int n=v4.size();
    cout<<"\n"<<v4[n-1]<<endl;
    v4.clear();
    cout<<"\nhello"<<v4[0]<<endl<<v4.size()<<endl;

    //To swap to vectors element with each other.
    v3.swap(v1);
    for(auto i=v3.begin(); i!=v3.end(); i++)
        cout<<*i<<" ";
    cout<<endl;
    for(auto i=v1.begin(); i!=v1.end(); i++)
        cout<<*i<<" ";

    return 0;
}