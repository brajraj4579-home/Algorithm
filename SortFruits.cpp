#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;
/*
* 
Sort Fruits!
Given a vector of pairs of a string and an integer representing names and prices of different fruits. A string is also passed as a parameter with name equals either "price", meaning you have to sort the fruits on the basis of their price or "name", which means you have to sort the fruit on the basis of their name.

Input Format

In the function an integer vector of pairs is passed.

Output Format

Return an integer vector of pairs in sorted order.



Sample Input

{ (Mango,100), (Guava,70), (Grapes,40), (Apple,60), (Banana,30) }, S = "price"


Sample Output

{ ("Banana", 30), ("Grapes", 40), ("Apple", 60), ("Guava", 70), ("Mango", 100) }


*/

bool pcompare(pair<string, int> v1, pair<string, int> v2) {
    return (v1.second < v2.second);
}

vector<pair<string, int>> sortFruits(vector<pair<string, int>> v, string S) {
    // your code  goes here
    if (S == "price") {
        sort(v.begin(),v.end(),pcompare);
    }
    else {
        sort(v.begin(), v.end());
    }

    return v;
}

int main() {
    vector <pair<string, int>> v1= {  {"Mango",100}, {"Guava",70}, {"Grapes",40}, {"Apple",60}, {"Banana",30}};
    vector <pair<string, int>> v2;
    v2= sortFruits(v1,"price");
  
    return 0;
}