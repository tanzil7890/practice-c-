#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout << "Displaying the vector: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout<<v.at(i)<<" ";
    }
    cout << endl;
}

int find(vector<int> &v, int target)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (target == v[i] + v[j])
            { // v[j] == target - v[i], v[i] == target - v[j];
                // cout<<;
                cout << i << " " << j;
            }
        }
    }
    return 0;
}

int main()
{
    // vector<int> v = {1, 2, 3, 4};
    static const int arr[] = {16, 2, 77, 29};
    // vector<int> vec (arr, arr + sizeof(arr) / sizeof(arr[0]) );
    vector<int> vec1(arr, arr + sizeof(arr) / sizeof(arr[0])); // zero length vector.
    int element;
    int size = (sizeof(arr) / sizeof(arr[0]));
    int target;
    // vector<int>::iterator iter;

    /* cout<<"Enter the size of your vector "<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an element to add to this  vector: ";
        cin>>element;
        vec1.push_back(element);
    } */
    // cout<<"Before: "<<endl;
    // display(vec1);

    cout << endl;

    // 2 7 11 15
    cout << "Enter the target value which you want to reach: " << endl;
    cin >> target;
    find(vec1, target);
}