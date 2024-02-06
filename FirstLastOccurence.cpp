#include <iostream>
#include<vector>
#include<bitset>
#include <cmath>
using namespace std;
/*
* 
First Occurence of a number inn a array using Recusion

*/
int FirstOcc(int arr[], int n,int key) {
    if (n == 0) { return -1; }
    if (arr[0] == key) return 0;
    int subIndex = FirstOcc(arr+1,n-1,key);
    if (subIndex != -1)
        return subIndex + 1;
    

    return -1;

}
int LastOcc(int arr[], int n, int key) {
    if (n == 0) { return -1; }

    int subIndex = LastOcc(arr + 1, n - 1, key);
    if (subIndex != -1)
        return subIndex + 1;
    if (arr[0] == key) return 0;

    return -1;

}

int main() {
    int arr[] = {1,2,3,9,4,7,6,5,7,6,8,34};
    int n = sizeof(arr)/sizeof(int);
    int index=FirstOcc(arr,n,7);
    cout << index<<endl;
     index = LastOcc(arr, n, 7);
    cout << index;

 
    return 0;
}