#include <iostream>
#include <vector>

using namespace std;
/*
Sorted Pair Sum
Given a sorted array and a number x, find a pair in array whose sum is closest to x.

Input Format

In the function an integer vector and number x is passed.

Output Format

Return a pair of integers.



Sample Input

{10, 22, 28, 29, 30, 40}, x = 54


Sample Output

22 and 30

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
/*
pair<int, int> closestSum(vector<int> arr, int x) {
    // your code goes here
    int b=0;
    int a= arr.at(0);
    int start = 1;
    int end = arr.size()-1;
    int compliment = x - a;
    bool found = false;
    int mid;
    for (int i = start; i < end; i++) {
        while(start < end) {
            mid = (start + end) / 2;
            if (abs(a + arr.at(mid) - x) < (abs(a + b - x))) 
                b = arr.at(mid);
            if (arr.at(mid) == compliment) { b = arr.at(mid); found = true; }
            if (arr.at(mid)<compliment) start=mid+1;
            if(arr.at(mid)>compliment) end=mid-1;
        }
        if (found) break;
        start  = arr.at(i);
        end= arr.size() - 1;
    }
    return {a,b};
}
*/

pair<int, int> closestSum(vector<int> arr, int x) {
    int diff = INT_MAX;
    int i = 0;
    int j = arr.size() - 1;
    int start = arr.at(i);
    int end = arr.at(j);
    pair<int, int> ans;// (start, end);
    
    while (start < end) {
        if (abs(start + end - x) < diff) { ans.first = start; ans.second = end; diff = abs(start + end - x); }
        if ((start + end) > x) { j--; end = arr.at(j); }
        else { i++; start = arr.at(i); }    
    }
    return ans;
}
int main() {
    vector<int> v1 = { 10, 22, 28, 29, 30, 40 };
    pair<int,int> ans;
    int val = 54;
    ans = closestSum(v1, 54);
    cout << "Closest Pair is " << ans.first<<ans.second;
    return 0;
}