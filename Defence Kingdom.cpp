#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*
Defense Kingdom
Theodore implements a new strategy game “Defense of a Kingdom”. On each level a player defends the Kingdom that is represented by a rectangular grid of cells. The player builds crossbow towers in some cells of the grid. The tower defends all the cells in the same row and the same column. No two towers share a row or a column.

The penalty of the position is the number of cells in the largest undefended rectangle. For example, the position shown on the picture has penalty 12.



Your task is to find the penalty of the give position.

Input Format

In the function an width and height of the kingdom and a vector of pairs representing positions of towers is passed.

Output Format

Return an integer representing the number of cells in the largest rectangle that is not defended by the towers.



Sample Input

15 8
{(3, 8), (11, 2), (8, 6)}


Sample Output

12

*/

int defkin(int W, int H, vector<pair<int, int>> position)
{
    // your code goes here
    vector<int> x;

    for (auto i : position) {
        x.push_back(i.first);
    }
    x.push_back(W + 1);
    sort(x.begin(), x.end());
    int max_x = INT_MIN;
    
        for (int  i = 0; i < x.size() - 1; i++) {
            max_x = max(max_x,abs(x.at(i+1)-x.at(i)));
        }
    vector<int> y;

    for (auto i : position) {
        y.push_back(i.second);
    }
    y.push_back(H+ 1);
    sort(y.begin(), y.end());
    int max_y = INT_MIN;
    
        for (int i = 0; i < y.size() - 1; i++) {
            max_y = max(max_y, abs(y.at(i + 1) - y.at(i)));
        }
    return((max_x - 1) * (max_y - 1));
}
int main() {
    vector<pair<int, int>> v1 = { {3,8},{11,2},{8,6} };
    int W = 15;
    int H = 8;
 
    int i=defkin(W,H,v1);
    cout << "Ans is " << i;
 
 
    return 0;
}