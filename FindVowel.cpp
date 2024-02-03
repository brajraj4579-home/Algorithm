#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
/*
Vowel Find
Given a string consisting of lowercase English alphabets, return a string containing all the vowels present in S in serial order.

Input Format

In the function a string S is passed.

Output Format

Return a string.



Sample Input

S = "aeoibsddaeioudb"


Sample Output

"aeoiaeiou"
*/

string vowel(string S) {
    // your code goes here
    int n = S.size();
    string ans;
    char c;
    for (int i = 0; i < n; i++) {
        c = S.at(i);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            ans += c;
    }
    return ans;
}

int main() {

    string s = "aeoibsddaeioudb";
    cout << vowel(s);
 
 
    return 0;
}