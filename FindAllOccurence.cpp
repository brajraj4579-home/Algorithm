#include <iostream>
#include<vector>
#include<bitset>
#include <cmath>
using namespace std;
/*
* 
All Occurence!
You are given an integer array of size N. Your aim is to find all the occurrences (indices) of a given element.



Input format:

Vector V and integer k (to find) are passed as parameters.



Output parameter:

Return a vector of integers containing all the indices in sorted manner.



Sample Input:

3

1 2 5 3 1 2 3 8 6 3 6 7 9

Sample Output:

3 6 9

*/
void findAll(vector<int> &v2, int k, vector<int> v,int n) {
    if (n == v.size()) return;
    if (v[n] == k) { v2.push_back(n); }
    findAll(v2,k,v,n+1);
    
}

vector<int> findAllOccurences(int k, vector<int> v) {
    vector <int> v2;
    int n = v.size();
    findAll(v2,k,v,0);
    return v2;

}

int main() {
    vector<int> v1 = {1,2,5,3,1,2,3,8,6,3,6,7,9};
    vector<int> v2;
    v2 = findAllOccurences(3, v1);
    for (auto i : v2)
        cout << i << " ";
 
    return 0;
}