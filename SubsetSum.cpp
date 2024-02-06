#include <iostream>
#include<vector>
#include<bitset>
#include <cmath>
using namespace std;
/*
* 
Subset Sum Queries
Given an array and N number of queries, where in each query you have to check whether a subset whose sum is equal to given number exists in the array or not.

Input Format

In the function two vectors num and query are passed.

Output Format

Return a bool vector of size N representing each query.



Sample Input

num[]   = {1, 2, 3}
query[] = {5, 3, 8}


Sample Output

{Yes, Yes, No}


Explanation

There is a subset with sum 5, subset is {2, 3}
There is a subset with sum 3, subset is {1, 2}
There is no subset with sum 8.


*/

#define BITMAX 10000

void preprocess(vector<int>num, bitset<BITMAX>& bt) {
    int n = num.size();
    bt[0] = 1;
    for (int i = 0; i < n;i++) {
        bt |= bt << num[i];
    }
}
vector<bool> subsetSum(vector<int> num, vector<int> query)
{
    int N = query.size();
    vector<bool> ans;
    // your code goes here
    bitset<BITMAX> bt;
    preprocess(num,bt);
    for (int i = 0; i < N;i++) {
        int x = query[i];
        if (x > BITMAX) { ans.push_back(false); }
        else {
            ans.push_back(bt[query[i]]);
        }
    }
    return ans;
}


int main() {
    vector<int> v1 = {1,2,3};
    vector<int> v2 = { 5,3,8 };
    vector<bool> ans;

    ans=subsetSum(v1,v2);
    for (auto i : ans)
        cout << i << " ";
    return 0;
}