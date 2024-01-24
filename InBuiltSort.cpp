#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*
Inbuild sorting Functions


*/

bool compare(int a, int b) {
    return a < b;
}
int main() {
    vector<int> v1 = { -2,3,4,-1,5,-12,6,1,3 };
    
    vector<int> v2;
    
    //v2 = selection(v1);
    sort(v1.begin(),v1.end());
    for (int i : v1)
        cout << i << " ";
    cout << endl;
    reverse(v1.begin(), v1.end());
    for (int i : v1)
        cout << i << " ";
    cout << endl;
    sort(v1.begin(), v1.end(),compare);
    for (int i : v1)
        cout << i << " ";
    cout << endl;
    sort(v1.begin(), v1.end(), greater<int>());
    for (int i : v1)
        cout << i << " ";
    cout << endl;
    return 0;
}