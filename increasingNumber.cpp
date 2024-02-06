#include <iostream>
#include<vector>
#include<bitset>
#include <cmath>
using namespace std;
/*
* 
Print Increasing Numbers
Given an integer N. Your task is to return an integer vector containing numbers from 1 to N in increasing order.

Sample Input

5

Sample Output

1 2 3 4 5

*/

void updatevector(vector<int> &v2,int i,int N) {
    if (i == N + 1) return;
    v2.push_back(i);
    updatevector(v2,i+1,N);
}

vector<int> increasingNumbers(int N) {
    vector<int> v2;
    updatevector(v2, 1, N);
    return v2;
}

int main() {
    vector<int> v2;
    v2 = increasingNumbers(5);
    for (auto i : v2)
        cout << i << " ";
 
    return 0;
}