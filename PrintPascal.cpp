#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;
/*
Pascal's Triangle
Pascal’s triangle is a triangular array of the binomial coefficients. Write a function that takes an integer value n as input and returns 2D array with first n lines of the Pascal’s triangle.

Following are the first 5 rows of Pascal’s Triangle.

1

1 1

1 2 1

1 3 3 1

1 4 6 4 1

Input Format

In the function an integer N is passed.

Output Format

Return the output as vector of vectors.
*/


vector<vector<int>> printPascal(int n)
{
    // your code goes here
    std::vector<std::vector<int>> pascalTriangle(n);

    for (int i = 0; i < n; ++i) {
        pascalTriangle[i].resize(i + 1, 1);
        for (int j = 1; j < i; ++j) {
            pascalTriangle[i][j] = pascalTriangle[i - 1][j - 1] + pascalTriangle[i - 1][j];
        }
    }

    return pascalTriangle;
}


int main() {
    vector < vector<int> > v1;
    v1 = printPascal(5);
 
    return 0;
}