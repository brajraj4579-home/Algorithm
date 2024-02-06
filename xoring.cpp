#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;
/*
* 

Xoring
We are given an array containg n numbers. All the numbers are present twice except for one number which is only present once. Find the unique number without taking any extra spaces and in linear time.



Input Format

An integer vector is passed in the function



Constraints

n < 10^5



Output Format

return a single integer containing the unique number



Sample Input

{ 1, 2, 3, 1, 4, 2, 3 }
Sample Output

4
Explanation

4 is present only once

*/
int xoring(vector<int> v1)
{
    // your code goes here
    int ans=0;
    int n = v1.size();
    for (int i = 0; i < n; i++) {
        ans = ans ^ v1[i];
    }
    return ans;
}
int main() {
    vector<int> v1 = {1,2,3,1,4,2,3};
    int j;
    j = xoring(v1);
    cout << j;
  
    return 0;
}