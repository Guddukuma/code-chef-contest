

// Chef and Coupon.

// Sample Input 1 
// 2
// 90 100
// 100 50 10
// 80 80 80
// 30 30
// 100 100 100
// 10 20 30

// Sample Output 1 
// YES
// NO



#include <iostream>
using namespace std;
void result(int Atotal, int Btotal, int coupoun, int delivery)
{
    if((Atotal+Btotal+coupoun) < (Atotal+Btotal+(2*delivery)))
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int delivery, coupoun, i, temp, Atotal = 0, Btotal = 0;
	    cin>>delivery>>coupoun;
	    for(i = 0; i < 3; ++i)
	    {
	        cin>>temp;
	        Atotal += temp;
	    }
	    for(i = 0; i < 3; ++i)
	    {
	        cin>>temp;
	        Btotal += temp;
	    }
	    if(Atotal < 150 && Btotal <150)
	    {
	        result(Atotal, Btotal, coupoun + (2*delivery), delivery);
	    }
	    else if (Atotal < 150 || Btotal <150)
	    {
	        result(Atotal, Btotal, coupoun+delivery, delivery);
	    }
	    else
	    {
	        result(Atotal, Btotal, coupoun, delivery);
	    }
	}
	return 0;
}