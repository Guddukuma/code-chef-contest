// Input
// The first line of the input contains an integer T denoting the number of test cases. Each of next T lines contains 2 space-separated integers: N and K, for this test case.
// Output
// For each test case output one integer - the maximum possible number of coins Tuzik can get.
// Sample Input 1 
// 2
// 5 2
// 11 3
// Sample Output 1 
// 1
// 2


#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int t;
    cin >> t;
    while(t--){
        int N , K ;
        cin >> N >> K;
        int mx=0;
        for(int i=1;i<=K;i++){
            int rem = N%i;
            if(rem>mx){
                mx=rem;
            }
        }
        cout << mx << endl;
    }
    return 0;
}