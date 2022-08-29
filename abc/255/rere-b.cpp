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
    int n,k;
    cin >> n >> k;
    vector<int> a(k);
    rep(i,k) cin >> a[i];
    rep(i,k) a[i]--;
    vector<int> x(n),y(n);
    rep(i,n) cin >> x[i] >> y[i];
    vector<double> r(n);
    rep(i,n) {
        r[i] = 1e18;
        rep(j,k) {
            double dx = x[i]-x[a[j]];
            double dy = y[i]-y[a[j]];
            double dist = sqrt(dx*dx+dy*dy);
            r[i] = min(r[i],dist);
        }
    }
    double ans = 0;
    rep(i,n) ans = max(r[i],ans);
    printf("%.10f\n",ans);
    return 0;
}