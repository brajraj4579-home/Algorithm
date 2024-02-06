#include <iostream>
#include<vector>
#include<bitset>
#include <cmath>
using namespace std;
/*
* 
Power Function Using Recursion
*/
int power(int a, int n) {
    int ans;
    cout << "Func Called" << endl;
    if (n == 0) return 1;
    int subprob = power(a,n/2);
    int subprobSq = subprob * subprob;
    if (n & 1) ans = a *  subprob * subprob;

    else ans =  subprob * subprob;

    return ans;
}


int main() {
    int ans = power(2, 10);
    cout << ans;
 
    return 0;
}