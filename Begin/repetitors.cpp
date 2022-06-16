#include <iostream>
using namespace std;


int main() {

    //for loop
    /* for (int i = 0; i < 5; i++)
    {
        cout<<i<<endl;
    } */

    //Example of infinite loop
    /* for (int i = 0; 34 < 40; i++)
    {
        cout<<i<<endl;
    }
     */

    //Multiplication table 
    int tableOf;
    cout<<"Enter the value of which table you have to print: ";
    cin>>tableOf;
    for(int i = 1; i<=10; i++){
        cout<<tableOf<<" * "<<i<<" = "<<tableOf*i<<endl;
    }

    cout<<"End of the loop";

    //While loop
    /* int i = 0;
    while(i<5){
        cout<<i<<endl;
        i++;
    } */

   //Printing 1 to 40 using while loop 
    /* int i = 1;
    while(i<=40){
        cout<<i<<endl;
        i++;
    } */

    //Example of infinte loop in while loop

    /* int i = 0;
    while (true)
    {
        cout<<i<<endl;
        i++;
    } */

    //Multiplication table 
    /* int tableOf;
    cout<<"Enter the value of which table you have to print: ";
    cin>>tableOf;
    int i = 1;
    while(i<=10){
        cout<<tableOf<< " * "<<i<<" = "<<tableOf*i<<endl;
        i++;
    } */
    


    //do-while loop in c++
    /* int i = 0;
    do
    {
        cout<<i<<endl;
        i++;
    } while (i<5); */

    //Printing 1 to 40 in do while loop[]
    /* int i =1;
    do{ 
        cout<<i<<endl;
        i+=2;
    }while(i<=40); */

    //Example of infinite loop using do while loop
    /* int i = 0;
    do {
        cout<<i<<endl;
        i++;
    }while(true);
     */

    //Multiplication table of 19 using do while loop
    /* int tableOf;
    cout<<"Enter the value of which table you have to print: ";
    cin>>tableOf;
    int i = 1;
    do{
        cout<<tableOf<<" * "<<i<<" = "<<tableOf*i<<endl;
        i++;

    } while(i<=10); */
    

    return 0;
}