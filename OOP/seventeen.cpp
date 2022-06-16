#include <iostream>
using namespace std;

// Example of Dynamic Initialization of Object using Constructor
// Dynamic Initialization- Means intialization on run-time

class BankDeposit
{
    int principal, years;
    float interestRate, returnValue;

public:
    BankDeposit() {}                    // It is important to make empty constructor, if you are doing something in the class ex: BankDeposit bd1, bd2; instead we can use BankDeposit bd1 = BankDeposir(p, y, r) to make it run.
    BankDeposit(int p, int y, float r); // r can be value like 0.04
    BankDeposit(int p, int y, int r);   // r can be value like 4
    void show();
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposit ::show()
{
    cout << endl
         << "Principal amount was " << principal << endl
         << " Return value after " << years << " year is " << returnValue << endl;
}

int main()
{
    BankDeposit bd1, bd2, bd3; // if we are not this type of object creation than we remove the empty constructor like BankDeposit(){};
    int p, y;
    float r;
    int R;

    cout << "Enter the value of p y and r " << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();
    cout << "Enter the value of p y and R " << endl;
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    return 0;
}