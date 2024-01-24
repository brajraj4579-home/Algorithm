#include <iostream>
#include <vector>

using namespace std;
/*
Optimized Bubble Sort
In simple bubble sort algorithm, the time complexity will remain O(n^2) every time, even if the given array is already sorted.
Your task is to optimized the bubble sort such that its best case time complexity becomes O(n).

Input Format

In the function an integer vector is passed.

Output Format

Return an integer vector in non decreasing order.



Sample Input

{1, 3, 5, 7, 9}


Sample Output

{1, 3, 5, 7, 9}}


Explanation

given vector is already sorted


*/
vector<int> optimizedBubbleSort(vector<int> v) {
    // your code  goes here
    int n = v.size();
    bool flag = false; //No need of this flag if vector is not sorted
    for (int i = 0; i <= n - 2; i++) {
        flag = false;
        for (int j = i+1 ; j <= n - 1; j++) {
            if (v.at(i) > v.at(j)) {
                swap(v.at(i),v.at(j ));
                flag = true;
            }        
        } 
        if (flag == false) break;
    }
    return v;

}

int main() {
    vector<int> v1 = { 1,3, 5, 7, 9 };
    int k = 2;
    vector<int> v2;
    v2 = optimizedBubbleSort(v1);
    for (int i : v2)
        cout << i << " ";
    cout << endl;
 
    return 0;
}