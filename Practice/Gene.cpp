
#include <iostream>
using namespace std;

//Gene Sequencing
int GeneCount(char ch[], int n){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(ch[i]==ch[i+1])
            count++;
    }
    
    return count;
}

int main(){
    int n=10;
    char ch[n]="ATTCGGGAA";
    cout<<GeneCount(ch, n);
    return 0;

}

/* 
int count(char ch[], int size){
    int count = 0;
    for(int i = 0; i<size; i++)
    {  
        if (ch[i] == ch[i+1])
        {
            count++;
        }
    }
    return count;
}


int main() {
    char ch[] = "ATTTTTTTCGGGA";
    int n = sizeof(ch) / sizeof(ch[0]);
    //count(ch);
    //cout<<sizeof(ch);
    cout<<count(ch, n);

    return 0;
} 
 */
/* #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // reverse order
    for (int i = n-1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
 */
/* #include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;

//
void update(int *a, int *b)
{
    // Complete this function
    int num1 = *a;
    int num2 = *b
    *a = num1+num2;
    *b = abs(num1 - num2);
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;
    cin >> a >> b;
    update(pa, pb);
    cout << a << "\n"
         << b << "\n";
   
    return 0;
}


 */
