#include <iostream>
#include <map>
#include <string>
#include <string_view>
using namespace std;

//Map in STL
//Map is used the store the key value pairs like {key: value}
//Map is an associative array.


int main() {
    map<string, int> marksMap;
    //map<string, int> marksMap {{"Tanzil", 90}, {"Nadeem", 78},};
    

    marksMap["Rohit"] = 89;
    marksMap["Harshit"] = 49;
    marksMap["Daniel"] = 99;
    marksMap["Victor"] = 2;

    marksMap.insert({{"Kozume"s, 169}, {"Kuroo", 187}});

    map<string, int>::iterator itr;
    for (itr = marksMap.begin(); itr!=marksMap.end(); itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<"\n";   //.first for key & .second for value.
    }

    cout<<"The size is: "<<marksMap.size()<<endl;
    cout << "The size is: " << marksMap.max_size() << endl;
    cout << "The size is: " << marksMap.empty() << endl;

    return 0;
}