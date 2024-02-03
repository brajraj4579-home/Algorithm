#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
/*
Remove Duplicates
Given a string S, the task is to remove all the duplicates from the given string

and return the updated string in sorted order.

Input Format

In the function a string is passed.

Output Format

Return the updated string.



Sample Input

string s = "geeksforgeeks"


Sample Output

"efgkors"
*/

string removeDuplicate(string s) {
    // your code goes here
    sort(s.begin(),s.end());
    string ans;
    char c;
    int n = s.size();
    for (int i = 0; i < n ; i++) {
        c = s.at (i); 
        while ((i < n ) && (s.at(i + 1) == c)) {
            i++;
        }
        ans += c;    
    }
    return ans;

}

int main() {

    string s = "cdegimnostu";
    cout << removeDuplicate(s);
 
 
    return 0;
}