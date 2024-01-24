#include <iostream>
#include <vector>

using namespace std;
/*
Insertion sort


*/
vector<int> insertion_sort(vector<int> v) {
    // your code  goes here
    int n = v.size();
    int temp,i,j;
    for ( i = 1; i <= n - 1; i++) {
        temp = v.at(i);
        for (j = i - 1; j >= 0; j--) {
            if (v.at(j) > temp) { v.at(j + 1) = v.at(j); }
            if (v.at(j) < temp) break; 
        }
        v.at(j+1) = temp;    
    }
    return v;
}

int main() {
    vector<int> v1 = { -2,3,4,-1,5,-12,6,1,3 };
    
    vector<int> v2;
    v2 = insertion_sort(v1);
    for (int i : v2)
        cout << i << " ";
    cout << endl;
 
    return 0;
}