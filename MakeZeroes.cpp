#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;
/*
* 
Make Zeroes
Given a two-dimensional array, if any element within is zero, make its whole row and column zero. For example, consider the matrix below.


Input Format

In the function a 2d vector is passed.

Output Format

Return the updated 2d vector.



Sample Input

{ {5, 4, 3, 9}, {2, 0, 7, 6}, {1, 3, 4, 0}, {9, 8, 3, 4} }


Sample Output

{ {5, 0, 3, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {9, 0, 3, 0} }


*/
vector<vector<int>> makeZeroes(vector<vector<int>> arr) {
    // your code goes here
    int r = arr.size();
    int c = arr[0].size();
    vector<int> row, col;
    int temp;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (arr[i][j] == 0) {
                row.push_back(i);
                col.push_back(j);
            }
        }
    }
    while (col.size()!=0) {
        temp = col[col.size() - 1];
        for (int i = 0; i < r; i++) {
            arr[i][temp] = 0;
        }
        col.pop_back();
    }
    while (row.size() != 0) {
        temp = row[row.size() - 1];
        for (int i = 0; i < c; i++) {
            arr[temp][i] = 0;
        }
        row.pop_back();
    }
    return arr;
}


int main() {
    vector <vector<int>> v1 = { {1,2,3,9}, {4,0,5,6}, {7,8,9,0},{9,8,3,4} };
    vector <vector<int>> v2;
    v2=makeZeroes(v1);
  
    return 0;
}