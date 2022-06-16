#include <iostream>
using namespace std;


int main(){
    
    //Array Example
    
    int marks[4] = {24, 45, 65, 75};
    //We can also write this way the same line
    //int marks[] = {24, 45, 65, 75};

    int mathMarks[4];

    mathMarks[0] = 675;
    mathMarks[1] = 575;
    mathMarks[2] = 475;
    mathMarks[3] = 375;

    cout<<"This are math Marks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

    //Here is how we can change the value of an array
    marks[2] = 9555;

    cout<<"This are only marks value"<<endl;
    /* cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl; */

    // To print the array with the help of loops

    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }

    //Using While loop
    
    cout<<"using while loop"<<endl;
    int i = 0;
    while(i<4){
        cout<<marks[i]<<endl;
        i++;
    }

    //Using Do while loop
    int j = 0;
    cout<<"Using Do While loop"<<endl;
    do{
        cout<<marks[j]<<endl;
        j++;
    }while(j<4);

    //Array & Pointer

    /* int testMarks[4] = {32, 94, 56, 87};
    int p = testMarks[4];
    *(p) give 32
    *(p++) give 94
    *(p+2) give 56 */

   /* Pointer Arthemetic

   address new = address current + i * sizeof(dataType)

 */
    cout<<"Coming for the new value"<<endl;
    int *p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    //cout<<"The value of marks at *p position "<<*p<<endl;
    //cout<<"The value of marks at *(p + 1) position "<<*(p + 1)<<endl;
    //cout<<"The value of marks at *(p + 2) position "<<*(p + 2)<<endl;
    //cout<<"The value of marks at *(p + 3) position "<<*(p + 3)<<endl;
    
    
    return 0;
}