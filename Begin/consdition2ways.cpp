#include <iostream>
using namespace std;

int main() {

    cout<<"----------Party program------------"<<endl;
    cout<<"Tell us your age while entering the club: ";
    int ageMembers;
    cin>>ageMembers;
    /* if((ageMembers < 18) && (ageMembers >= 0)){
        cout<<"\nYou are kid bro"<<endl;
    }else if(ageMembers == 18){
        cout<<"\nWait for one more year"<<endl;
    }else{
        cout<<"\nWelcome to the party"<<endl;
    } */

    //Switch case

    switch (ageMembers)
    {
    case 18: 
        cout<<"You are 18"<<endl;
        break;

    case 20: 
        cout<<"You are 20"<<endl;
        break;

    case 2: 
        cout<<"You are 2"<<endl;
        break;
    
    default:
        cout<<"No default case"<<endl;
        break;
    }

    cout<<"Bye Bye."<<endl;

    return 0;
}