#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*
Counting Sort


*/

vector<int> counting(vector<int> v) {
    int max = INT_MIN;
    for (auto i : v)
        if (max < i) max = i;
    vector<int> v1(max + 1, 0);
    for (auto i : v) {
        v1.at(i) = v1.at(i) + 1;    
    }
    v.clear();
    for (int i = 0; i <= max; i++) {
        while (v1.at(i)>0) {
            v.push_back(i);
            v1.at(i) = v1.at(i) - 1;        
        }
    }
    return v;
}
int main() {
    vector<int> v1 = { 2,3,4,1,5,12,6,1,3 };
    
    vector<int> v2;
    
    v2 = counting(v1);
 
    for (int i : v2)
        cout << i << " ";
    cout << endl;
 
    return 0;
}