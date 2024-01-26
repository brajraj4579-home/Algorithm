#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*
Sorting Cartesian Points
Given co-ordinates of N points on X-Y axis, your task is to sort them in accordance to the x-coordinate. If the x-coordinates are same then compare y-coordinates.

Input Format

In the function an integer vector of pairs is passed.

Output Format

Return the vector in sorted order.



Sample Input

{ (3, 4), (2, 3), (3, 7), (1, 5), (3, 4) }


Sample Output

{ (1, 5), (2, 3), (3, 4), (3, 4), (3, 7) }


*/
bool compare(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first) {
        return (a.second < b.second);    
    }
    else return (a.first<b.first);

}

vector<pair<int, int>> sortCartesian(vector<pair<int, int>> v)
{
    int N = v.size();
    // your code goes here
    sort(v.begin(),v.end(),compare);
    return v;

}
int main() {
    vector<pair<int, int>> v1 ( {{3, 4}, {2, 3}, {3, 7}, {1, 5}, {3, 4}});
   // vector<pair<int, int>> v1={{3, 4}, {2, 3}, {3, 7}, {1, 5}, {3, 4}}; this also works
   
    vector<pair<int, int>> v2;
    v2=sortCartesian(v1);

    for (auto i : v2)
        cout <<"(" << i.first << ","<<i.second<<")";
    cout << endl;
 
    return 0;
}