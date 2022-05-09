// Input Format:
// The first line contains one integer, T, which is the number of test cases. Each test case is then described in two lines.
//  The first line contains two integers N and K, as described in the statement.
// The next line contains N integers, which denote the initial characteristic values for the minions.

// Output Format:
// For each testcase, output one integer in a new line, which is the number of Wolverine-like minions after the transmogrification.
// 1
// 5 10
// 2 4 1 35 1
// output = 1


#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,sum=0;
        cin>>n>>k;
        for (int i=0;i<n;i++){
            int temp;
            cin>>temp;
        
            if((temp+k)%7==0){
            sum++;
            }
        }
    cout<<sum<<endl;
    }
}