#include <iostream>
#include <string>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    string name[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter id of your item: " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item: " << endl;
    cin >> itemPrice[counter];
    cout << "Enter Name of your item: " << endl;
    cin >> name[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of the item with Id " << itemId[i] << " is " << itemPrice[i] <<"and name is "<<name[i]<< endl;
    }
}

// start writing your main code
int main()
{
    Shop sportsComplex;
    sportsComplex.initCounter();
    /* for (int i = 0; i < 3; i++)
    {
        sportsComplex.setPrice();
    } */

    sportsComplex.setPrice();
    sportsComplex.setPrice();
    sportsComplex.setPrice();
    sportsComplex.displayPrice();

    return 0;
}