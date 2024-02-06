#include <iostream>
#include<vector>
#include<bitset>
#include <cmath>
using namespace std;
/*
* 
Is Array Sorted Using Recusion

*/
bool isSorted(int arr[],int n) {
    //Base case
    if (n == 1) return true;
    //Recusion case
    if ((arr[0] < arr[1]) && isSorted(arr+1, n - 1)) return true;
    else return false;

}

int main() {
    int arr[] = {1,2,3,5,4};
    int n = sizeof(arr) / sizeof(int);
    bool sorted;
    sorted = isSorted(arr,n);
    if (sorted)
        cout << "Array is sorted" << endl;
    else
        cout << "Array is not Sorted" << endl;
 
    return 0;
}