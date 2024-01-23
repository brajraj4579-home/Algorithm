#include <iostream>
#include <vector>
using namespace std;
/*
Lower Bound
Given an array of integers A (sorted) and a integer Val.

Implement a function that takes A and Val as input parameters and returns the lower bound of Val.

Note : If Val is not present in array then Lower bound of a given integer means integer which is just smaller than given integer.

Otherwise Val itself is the answer.

If Val is less than smallest element of array A then return '-1' in that case.



Example 1  :

A = [-1, -1, 2, 3, 5]

Val = 4

Answer :  3

Since 3 is just smaller than 4 in the array.

Example 2  :

A = [1, 2, 3, 4, 6]

Val = 4

Answer :  4
Since 4 is equal to 4.
*/

/* Brute Force O(N)
int lowerBound(vector<int> A, int Val) {
    // your code goes here
    int lb = -1;
    int smallest = INT_MAX;
    //bool AllNum;
        for (int i : A) {
            if ((lb < i) && (i <= Val))
                lb = i;
            if (i < smallest) smallest = i;
        }
    if (Val < smallest) return -1;
    else return lb;


}*/
int lowerBound(vector<int> A, int Val) {
    int start = 0;
    int end = A.size() - 1;
    int mid; 
    int lb = -1;
    while (start <= end) {
        mid = (start + end) / 2;
        if (A[mid] <= Val) {
            lb = A[mid];
            start = mid + 1;
        }
        else {
            end = mid - 1;        
        }    
        
    }
    return lb;
}

int main() {
    vector<int> v1 = { 1, 2, 3, 4, 6 };
    int val = 4;
    cout << "Lower Bound is " << lowerBound(v1, val);
    return 0;
}