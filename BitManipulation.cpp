#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;
/*
* 

Bit Manipulation

*/
int getIthBit(int &n,int i) {
    int mask = 1 << i;
    return (n & mask);
}
void setIthBit(int &n,int i) {
    int mask = 1 << i;
    n = n | mask;
}
void clearIthBit(int &n,int i) {
    int mask = ~(i << i);
    n = n & mask;
}
void updateIthBit(int &n,int i,int v) {
    int mask = v << i;
    clearIthBit(n,i);
    n = n | mask;
}
void clearBitsInRange(int &n,int i,int j) {
    int mask;
    int a = -1 << j;//1111110000000
    int b = (1 << i) - 1;  ///2^i -1 = 0000000001111
    mask = a | b;
    n = n & mask;
}
void clearLastIthBits(int& n, int i) {
    int mask = (-1 << i);
    n = n & mask;
}


int clearLastithBit(int& n, int i) {
    n = n >> i;
    n = n << i;
    return n;
}
void replaceBits(int &n,int i,int j,int m) {
    clearBitsInRange(n, i, j);
    int mask = m << i;
    n = n | mask;
    
}
/*Check if n is power of 2*/
bool CheckPower2(int n) {
    if ((n & (n - 1)) == 0)
        return true;// it is power of 2
    else 
        return false;// It is not power of 2
}
int countSetBits(int &n) {
    int count = 0;
    while (n > 0) {
        if (n & 1)
            count++;
        n = n >> 1;    
    }
    return count;
}
int countSetBitsHack(int n) {
    int count = 0;
    while (n > 0) {
        n = n & (n - 1);
        count++;    
    }
    return count;
}
/*Fast Exponentiation*/
//3^5 = a^n = 3^101 = ans = 1*a*a^4
int fastExpo(int a, int n) {
    int ans = 1;
    while (n > 0) {
        int lastbit = n & 1;
        if (lastbit) {
            ans = ans * a;
        }
        a = a * a;
        n = n >> 1;
    }
    return ans;

}
int convertToBinary(int n) {
    int ans = 0;
    int tenpower = 1;
    while (n>0) {
        int lastbit = n & 1;
        if (lastbit) {
            ans = ans + (tenpower);
        }
        tenpower *= 10;
        n = n >> 1;    
    }
    return ans;

}

int main() {
    int i = 10;
    
    int j= convertToBinary(i);
    cout << j;
  
    return 0;
}