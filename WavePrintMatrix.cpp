#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;
/*
Wave Print!
Given a matrix, print it in Reverse Wave Form.

Input Format:

Given integer m (number of rows), integer n (number of columns) and 2d vector.



Output Format:

Return a linear vector of integers in the required order.



Examples :

Input :
1 2 3 4

5 6 7 8

9 10 11 12

13 14 15 16

Output :
4 8 12 16 15 11 7 3 2 6 10 14 13 9 5 1



Input :
1 9 4 10

3 6 90 11

2 30 85 72

6 31 99 15

Output :
10 11 72 15 99 85 90 4 9 6 30 31 6 2 3 1


*/


vector<int> WavePrint(int m, int n, vector<vector<int>> arr)
{
    // your code goes here
    int col_end = 3;
    int col_start = 0;
    int row_start = 0;
    int row_end = 3;
    int i;
    vector <int> v2;
    while (col_end >= col_start)  {
        for (i = 0; i <= row_end; i++) {
            cout << arr[i][col_end] << " ";
            v2.push_back(arr[i][col_end]);
        }
        if(col_end>=0)
        col_end--;
        for (i = row_end; i >= row_start;i--) {
            cout << arr[i][col_end] << " ";
            v2.push_back(arr[i][col_end]);
        } 
        if (col_end >= 0)
            col_end--;
    }
    return v2;
}


int main() {
    vector < vector<int> > v1{ { 1,2,3,4 }, {5,6,7,8},{9,10,11,12},{13,14,15,16} };
    int col_end = 3;
    int col_start = 0;
    int row_start = 0;
    int row_end = 3;
    vector <int> ans;
    ans = WavePrint(4, 4, v1);

 
    return 0;
}