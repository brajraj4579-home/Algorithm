#include <iostream>
#include<vector>
#include<bitset>
#include <cmath>
using namespace std;
/*
* 
Number Spell
2021->
two zero two one
*/
vector<string> spell = { "zero","one","two","three","four","five","six","seven","eight","nine" };
void numspell(int n){
    if (n == 0)
        return;
    numspell(n/10);
    cout << spell[n % 10] << " ";
}

int main() {
    int n = 2021;
    
    numspell(n);
 
    return 0;
}