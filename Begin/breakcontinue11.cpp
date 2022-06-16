#include <iostream>
using namespace std;


int main(){
    
    /* for (int i = 0; i < 5; i++)
    {
        
        if(i == 2){
            break;
        }
        cout<<i<<endl;
    } */

    // Here, break keyword used to break the loop at the given condition.
    // It is mostly refer end the loop.

    for(int i = 0; i < 5; i++){
        if (i == 2)
        {
            continue;
        }
        cout<<i<<endl;
        
    }
    // Here, continue keyword used to continue the loop by excluding the at the given condition.
    // It is mostly refer as for skipping.

    return 0;
}