#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*
Find Displacement

Given a Long Route containing N,S,E,W directions , Finnd the shorted Path to reach a location.
Sample Input:
SNNNEWE
Sample Output:
NNE

Explaination:

 ??
 ?
??

|????





??
*/
/*
string shortestroute(string str)
{
    // your code goes here

}*/
int main() {
    char route[1000];
    char ans[1000];
    int x = 0;
    int y = 0;
 
    cin.getline(route,1000);
    for (int i = 0; route[i] != '\0';i++) {
        switch (route[i]) {
        case 'S':
        {
            y--;
        }
        break;
        case 'N': {
            y++;
        
        }
        break;
        case 'E': {
            x++;        
        }
        break;
        case 'W': {
            x--;        
        }
        break;        
        }
    }
    cout << "x=" << x<<" y= "<<y<<endl;
    
    
    int i = 0;
    while ((x!=0)||(y!=0)) {
        if (x < 0) { ans[i++] = 'W'; x++; }
        else if (x > 0) { ans[i++] = 'E'; x--; }
        if (y < 0) { ans[i++] = 'S'; y++; }
        else if (y > 0) { ans[i++] = 'N'; y--; }    
    }
    ans[i] = '\0';
    cout << "Ans is " << ans;
 
    return 0;
}