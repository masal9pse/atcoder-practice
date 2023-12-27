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
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int x = 0;
    while (true)
    {
        bool exist = false;
        rep(i,n) if(a[i] == x) exist = true;
        if (!exist) {
            cout << x << endl;
            return 0;
        }
        x++;
    }
    return 0;
}