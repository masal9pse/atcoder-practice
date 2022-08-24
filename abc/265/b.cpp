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
const double PI = acos(-1);

int main()
{
    int n, m;
    ll t;
    cin >> n >> m >> t;
    vector<int> a(n-1);
    rep(i,n-1) cin >> a[i]; 
    vector<int> x(n), y(n);
    rep(i, m) cin >> x[i] >> y[i];
    vector<int> b(n);
    rep(i, n) b[x[i] - 1] = y[i];
    rep(i, n-1)
    {
        t += b[i];
        t -= a[i];
        if (t <= 0)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}