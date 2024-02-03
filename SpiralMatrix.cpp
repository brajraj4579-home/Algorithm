#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;
/*
Spiral Matrix


*/


int binaryToDecimal(string s)
{
    // your code goes here
    int ans = 0;
    int n = s.size();
    int num;
    char c;
    for (int i = 0; i < n;i++) {
        c = s.at(i);
        num = (c=='1')?1:0;
        ans += num * (int)pow(2,n-i-1);
    }
    return ans;
}

int main() {

    int mat[][4] = { {10,20,30,40},
                    {15,25,35,45},
                    {16,26,36,46},
                    {19,29,39,49},
                    };
    int row_start = 0;
    int row_end = 3;
    int col_start = 0;
    int col_end = 3;
    for (row_start = 0, row_end = 3, col_start = 0, col_end = 3; row_start <= row_end && col_start <= col_end; row_start++, row_end--, col_start++, col_end--) {
        for (int j = col_start; j <= col_end;j++ ) { // Top Row
            cout << mat[row_start][j] << " ";
        }
        for (int j = row_start+1; j <= row_end; j++) { // Last Col
            cout << mat[j][col_end] << " ";
        }
        for (int j = col_end-1; j >= col_start; j--) { // Bottom Row
            if (row_end == row_start) break;
            cout << mat[row_end][j] << " ";
        }
        for (int j = row_end-1; j >= row_start+1; j--) { // First Col
            if (col_start == col_end) break;
            cout << mat[j][col_start] << " ";
        }

    
    }

 
    return 0;
}