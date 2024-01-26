#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*
Chopsticks
Given N sticks and an array length where each length[i] represents length of each stick. Your task is to make maximum number of pairs of these sticks such that the difference between the length of two sticks is at most D. A stick can't be part of more than one pair of sticks.

Input Format

In the function an integer vector length and number D is passed.

Output Format

Return an integer representing total number of such pairs.



Sample Input

{1, 3, 3, 9, 4}, x = 2


Sample Output

2


Explanation

(1st, 3rd) and (2nd, 5th) can be paired together.

*/

int pairSticks(vector<int> length, int D)
{
    // your code goes here
    int n = length.size();
    sort(length.begin(), length.end());
    int i = 0;
    int ans = 0;
    while (i < n - 1) {
        if (abs(length.at(i + 1) - length.at(i)) <= D) { 
            ans++; 
            cout << "Pair is " << length.at(i ) << " " << length.at(i+1);
            i = i + 2;
        
        }
        else { i++; }    
    }
    cout << endl;
    return ans;

}
int main() {
    vector<int> v1 = { 1, 3, 3, 9, 4 };
 
    int i=pairSticks(v1,2);
    cout << "Ans is " << i;
 
 
    return 0;
}