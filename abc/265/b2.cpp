#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
#include <map>
#include <cassert>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    int n,m;ll t;
    cin >> n >> m >> t;    
    vector<int> a(n);
    rep(i,n-1) cin >> a[i];
    vector<int> bonus(n);
    rep(i,m) {
        int x,y;
        cin >> x >> y;
        bonus[x-1] = y;
    }
    rep(i,n-1) {
        t -= a[i];
        t += bonus[i];
        if (t <= 0) {
            cout << "No" << endl;
            return 0;
        }
        int k = 3;
    }
    cout << "Yes" << endl;
    return 0;
}