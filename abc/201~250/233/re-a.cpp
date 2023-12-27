#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int ceil (int a,int b) {
    return (a+b-1)/b;
}
int main()
{
    int x,y;
    cin >> x >> y;
    if (x < y) {
        int ans = 0;
        cout << ((y - x) + 9)/ 10 << endl;  
    } else {
        cout << 0 << endl;
    }
    return 0;
}