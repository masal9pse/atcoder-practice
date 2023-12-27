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
    int a,b,k;
    int x = 0;
    cin >> a >> b >> k;
    
    x = b / (a * k);

    if(a * x * k >= b) {
        cout << x << endl;
    } else {
        // cout << x << endl;
        // cout << a * x * k << endl;
        // cout << b << endl;
        cout << 0 << endl;
    }

    // cout << x << endl;
    return 0;
}