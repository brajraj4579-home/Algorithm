#include <iostream>
#include <vector>

using namespace std;
/*
Selection Sort


*/
vector<int> selection(vector<int> v) {
    // your code  goes here
    int n = v.size();
    int i, j, min;
    for (i = 0; i <= n - 2; i++) {
        min = i+1;
        for (j = i ; j <= n - 2; j++) {
            if (v.at(j) < v.at(min)) min = j;        
        }
        swap(v.at(i),v.at(min));    
    } 
    return v;
}

int main() {
    vector<int> v1 = { -2,3,4,-1,5,-12,6,1,3 };
    
    vector<int> v2;
    v2 = selection(v1);
    for (int i : v2)
        cout << i << " ";
    cout << endl;
 
    return 0;
}