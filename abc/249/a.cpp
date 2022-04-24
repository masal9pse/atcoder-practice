#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)
 
int main()
{
    int a,b,c,d,e,f,x;
    cin >> a >> b >> c >> d >> e >> f >> x;
    int takahashi = 0;
    int aoki = 0;
    for (int k = 0; k < x; k++)
    {
        if (k % (a + c) < a) {
            takahashi += b;
        }
        if (k % (d + f) < d) {
            aoki += e;
        }
    }
    if (takahashi > aoki) cout << "Takahashi" << endl;
    else if (takahashi < aoki) cout << "Aoki" << endl;
    else if (takahashi == aoki) cout << "Draw" << endl;
    return 0;
}