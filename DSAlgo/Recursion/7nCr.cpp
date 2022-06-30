#include <iostream>
using namespace std;

//Combination Formula:
/*
The combination formula is used to find the number of ways of selecting items from a collection, such that the order of selection does not matter. In simple words, combination involves the selection of objects or things out of a larger group where order doesn’t matter. 
The formula for combination helps to find the number of possible combinations that can be obtained by taking a subset of items from a larger set. It shows how many different possible subsets can be made from the larger set.
 */

typedef long long ll;

ll fact1(ll n)
{
    ll i, prod = 1;
    for (i = 1; i <= n; i++)
    {
        if (i == 0)
        {
            return 1;
        }
        else
        {
            prod = prod * i;
        }
    }
    return (long long)prod;
}

ll Comb(ll n, ll r){
    ll t1, t2, t3;
    t1=fact1(n);
    t2=fact1(r);
    t3=fact1(n-r);

    return (long long)t1/(t2*t3);
}
//Time Taken: O(n)


//Using Recursion By the help of Pascals's Triangle
//There are two imp criteria 1) r=0 or n=r give 1 at the extend position
//2)4C2 -> 3C1 + 3C2. So, n-1Cr-1 + n-1Cr

ll rComb(ll n, ll r){
    if(r==0 || n==r)
        return 1;
    else   
        return rComb(n-1, r-1) + rComb(n-1, r);
}

int main() {
    cout<<fact1(18)<<endl;
    cout<<fact1(4)<<endl;
    cout<<fact1(14)<<endl;
    cout<<Comb(18, 4)<<" of Possible Value"<<endl;
    cout<<rComb(5, 2)<<" of Possible Value"<<endl;

    return 0;
}