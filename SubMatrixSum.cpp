#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;
/*
Submatrix Sum
Given a matrix of size M x N, there are large number of queries to find submatrix sums. Inputs to queries are left top and right bottom indexes of submatrix whose sum is to find out.

How to preprocess the matrix so that submatrix sum queries can be performed in O(1) time.



INPUT FORMAT:

Given a matrix (2d vector) and query.. Each query has Starting row, Starting column, Ending row, Ending column.



OUTPUT FORMAT:

A single integer which is the sum of the submatrix.


Example :

tli :  Row number of top left of query submatrix
tlj :  Column number of top left of query submatrix
rbi :  Row number of bottom right of query submatrix
rbj :  Column number of bottom right of query submatrix

Input: mat[M][N] = {{1, 2, 3, 4, 6},
                    {5, 3, 8, 1, 2},
                    {4, 6, 7, 5, 5},
                    {2, 4, 8, 9, 4} };
Query1: tli = 0, tlj = 0, rbi = 1, rbj = 1
Query2: tli = 2, tlj = 2, rbi = 3, rbj = 4
Query3: tli = 1, tlj = 2, rbi = 3, rbj = 3;

Output:
Query1: 11  // Sum between (0, 0) and (1, 1)
Query2: 38  // Sum between (2, 2) and (3, 4)
Query3: 38  // Sum between (1, 2) and (3, 3)
*/


int sum(vector<vector<int>> v1, int sr, int sc, int er, int ec) {
    // your code goes here
    
    int r = v1.size();
    int c = v1[0].size();
    vector < vector<int> > v2(r,vector<int>(c,0));
    int i, j;
    int ans;
    v2[0][0] = v1[0][0];
    for (i = 1; i < r; i++) {
        v2[i][0] = v1[i][0] + v2[i - 1][0];
    }
    for (j = 1; j < c; j++) {
        v2[0][j] = v1[0][j] + v2[0][j - 1];
    }
    for (i = 1; i < r; i++) {
        for (j = 1; j < c;j++) {
            v2[i][j] = v1[i][j] + v2[i - 1][j] + v2[i][j - 1] - v2[i - 1][j - 1];
        }
    }
    
    ans = v2[er][ec];
    if (sr > 0) { ans -= v2[sr - 1][ec]; }
    if (sc > 0) { ans -= v2[er][sc - 1]; }
    if ((sc > 0) && (sr > 0)) ans += v2[sr - 1][sc - 1];

    return ans;


}


int main() {
    vector < vector<int> > v1{ {1,2,3,4,6},{5,3,8,1,2},{4,6,7,5,5},{2,4,8,9,4} };
    int s;
    s = sum(v1,2,2,3,4);
    cout << "Sum is " << s;
 
    return 0;
}