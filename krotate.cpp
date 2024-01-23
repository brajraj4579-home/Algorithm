#include <iostream>
#include <vector>

using namespace std;
/*
K-Rotate
Given an integer vector and a value k, your task is to rotate the array k times clockwise.

Input Format

In the function an integer vector and number k is passed.

Output Format

Return an integer vector.



Sample Input

{1, 3, 5, 7, 9}, x = 2


Sample Output

{7, 9, 1, 3, 5}


Explanation

After 1st rotation - {9, 1, 3, 5, 7}
After 2nd rotation - {7, 9, 1, 3, 5}
*/
//Using Additional Vector
vector<int> kRotate(vector<int> a, int k) {
    // your code  goes here
    int n = a.size();
    k = k % n;
    vector<int> b;
    // |..............<-------|
    for (int i = n - k ; i < n;i++) {
        b.push_back(a.at(i));
        
    }
    // |------------->........|
    for (int i = 0; i < n - k ; i++) {
        b.push_back(a.at(i));
        
    }
    
    return b;
}
//In Place
vector<int> kRotate1(vector<int> a, int k) {
    int n = a.size();
     int i, j,temp;
    for (i = 0, j = n - k-1; i < j; i++, j--) {
        temp = a.at(i);
        a.at(i) = a.at(j);
        a.at(j) = temp;    
    }

    for (i = n-k, j = n - 1; i < j; i++, j--) {
        temp = a.at(i);
        a.at(i) = a.at(j);
        a.at(j) = temp;
    }

    for (i = 0, j = n - 1; i < j; i++, j--) {
        temp = a.at(i);
        a.at(i) = a.at(j);
        a.at(j) = temp;
    }
    return a;

}
//Using Reverse STL
vector<int> kRotate2(vector<int> arr, int k) {
    int n = arr.size();
    k = k % n;
    reverse(arr.begin(), arr.begin() + n - k);
    reverse(arr.begin() + n - k, arr.end());
    reverse(arr.begin(),arr.end());
    return arr;
}

int main() {
    vector<int> v1 = { 1, 3, 5, 7, 9 };
    int k = 2;
    vector<int> v2;
    v2 = kRotate(v1, 2);
    for (int i : v2)
        cout << i << " ";
    cout << endl;
    v2 = kRotate1(v1, 2);
    for (int i : v2)
        cout << i << " ";
    cout << endl;
    v2 = kRotate2(v1, 2);
    for (int i : v2)
        cout << i << " ";
    return 0;
}