#include <iostream>
#include<vector>
#include<bitset>
#include <cmath>
using namespace std;
/*
* 
Print Numbers in Increment/Decrement Order using Recusion

*/
void PrintIncDec(int n) {
    if (n == 0) return;
    cout << n << " ";//For Decreasing order --Towards Base case
    PrintIncDec(n - 1);
    cout << n << " ";// For Increasinng order- Comming back from Bigger problem

}

int main() {
    int n = 5;
    PrintIncDec(n);

 
    return 0;
}