
//   Coins And Triangle.
//  3 3 5 7
     
//      *
//     * *
//    * * *

//  consider of cone hight.


#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
long long int h;
    while (  t-- ){
        int n;
        
        cin>>n;
        n=8*n+1;
        n=sqrt(n);
        cout<<(n-1)/2<<endl;
    }
    return 0;
}
