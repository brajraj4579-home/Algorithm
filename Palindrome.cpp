#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
/*
Check Palindrome
Given a string, write a c function to check if it is palindrome or not.

A string is said to be palindrome if reverse of the string is same as string. For example, “abba” is palindrome, but “abbc” is not palindrome.

Input Format

In the function a string is passed.

Output Format

Return true if it is palindrome else false.



Sample Input

abcdcba


Sample Output

true

*/

bool isPalindrome(string str)
{
    // your code goes here
    int len = str.length();
    for (int i = 0, j = len - 1; i < len / 2; i++, j--) {
        if (str.at(i) != str.at(j)) return false;
    
    }
    return true;

}

int main() {
    string str;
    //char str[100];
    cout << "Enter String";
    //cin.getline(str);
    cin >> str;
    //getline(cin, str);
    if (isPalindrome(str))
        cout << "This given String is a Palindrome";
    else
        cout << "The String is NOT a Palindrome";


 
    return 0;
}