#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;
/*
* 
Modulo Exponentiation
Given three numbers x, y and mod, compute x raised to power y modulo mod i.e.  (x^y)%mod

Input Format

Three integers x, y and mod are passed.

Output Format

Return an integer



Sample Input

x = 12, y = 25, mod = 10007
Sample Output

9603

*/
long long fastExpo(int b,int n,int m) {
    long long ans = 1;
    long long a = b;
    while (n > 0) {
        int lastbit = n & 1;
        if (lastbit) {
            ans = ((ans%m )*(a%m)) % m;
        }
        a = ((a) * (a));
        n = n >> 1;
    }
    return ans;
}
int power(int x, int y, int mod)
{
    // your code goes here
    long long j = fastExpo(x,y,mod);
    cout << j << " " << endl;
    return j % mod;

}


int main() {
    int j;
    j = power(12,25,10007);
 
    cout << j;
  
    return 0;
}