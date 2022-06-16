#include <iostream>
using namespace std;

// Example to calculate the PPF
// F = P[{(1+i)n-1}/i]
/*
where,

‘F’ stands for the maturity amount of the PPF
‘P’ stands for the annual instalments paid
‘n’ stands for the number of years or tenure of the PPF
‘i’ stands for the rate of interest.
 */
class PPF
{
    int annualInstallment;
    float years;
    float rateOfInterest;

public:
    PPF() {}
    PPF(int a, float y, float i)
    {
        annualInstallment = a;
        years = y;
        rateOfInterest = i;
    }

    void calculate();
};

void PPF ::calculate()
{
    double ma;
    // F = P[{(1+i)n-1}/i]
    ma = annualInstallment * (((1 + rateOfInterest) * years - 1) / rateOfInterest);
    cout << "The maturaity amount: " << ma;
}

int main()
{
    PPF p1;
    int annualInterest;
    float years, rateOfInterest;
    cout<<"Give the Values to Calculate your Maturity amount after the certain given period of time "<<endl;
    cout<<"Enter the annual interest:"<<endl;
    cin>>annualInterest;
    cout<<"Enter the number of years: "<<endl;
    cin>>years;
    cout<<"Enter the rate of interest on which you have to calculate: "<<endl;
    cin>>rateOfInterest;

    p1 = PPF(annualInterest, years, rateOfInterest);
    p1.calculate();
    return 0;
}