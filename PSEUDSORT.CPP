// Input Format
// The first line contains a single integer T - the number of test cases. Then the test cases follow.
// The first line of each test case contains an integer N - the size of the array A.
// The second line of each test case contains N space-separated integers A1,A2,…,AN denoting the array A.
// Output Format
// For each testcase, output YES if the array A is pseudo-sorted, NO otherwise.

// You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).


#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
     while(t--)
     {
         int n,i;
         cin>>n;
         int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count=0;
      
	    for(i=0;i<n-1;i++)
	    {
	        if(a[i]>a[i+1])
	        {
	            swap(a[i],a[i+1]);
	            count++;break;
	        }
	    }
	    for(i=0;i<n-1;i++)
	    {
	        if(a[i]>a[i+1])
	        {
	            count++;
	        }
	    }
	    if(count<=1)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
         
     }
	 
	   
	return 0;
}

