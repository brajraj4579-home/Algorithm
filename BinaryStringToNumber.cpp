#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;
/*
Binary String to Number
Given a binary string as input, convert into its decimal form and return it as an integer.

Input Format

In the function a binary string is passed.

Output Format

Return an integer.



Sample Input

111


Sample Output

7
*/


int binaryToDecimal(string s)
{
    // your code goes here
    int ans = 0;
    int n = s.size();
    int num;
    char c;
    for (int i = 0; i < n;i++) {
        c = s.at(i);
        num = (c=='1')?1:0;
        ans += num * (int)pow(2,n-i-1);
    }
    return ans;
}

int main() {

    string s = "10100";
    cout << binaryToDecimal(s);
 
 
    return 0;
}