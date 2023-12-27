#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip> 
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)
 
int main()
{
    int h,w;
    cin >> h >> w;
    vector<vector<int>> a(h,vector<int>(w));
    rep(i,h) rep(j,w) cin >> a[i][j];
    rep(i1,h) rep(i2,h) rep(j1,w) rep(j2,w) {
        if (i1 < i2 && j1 < j2) {
            if (a[i1][j1] + a[i2][j2] > a[i2][j1] + a[i1][j2]) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}