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
using vi = vector<int>;
using vl = vector<ll>;
using vs = vector<string>;
using mi = map<int, int>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
# define ALL(x) (x).begin(), (x).end()
# define SZ(x) ((int)(x).size())
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main() {
    int n,m;
    cin >> n >> m;
    vi a(n);
    rep(i,n) cin >> a[i];
    ll s = 0,t = 0;
    rep(i,m) s += a[i] * (i+1);
    rep(i,m) t += a[i];
    ll ans = s;
    
    rep(i,n-m) {
        ll ns = s - t + a[i+m]*m;
        ll nt = t - a[i] + a[i+m];
        s = ns;
        t = nt;
        ans = max(s,ans);
    }
    cout << ans << endl;
}

// int main()
// {
//     int n,m;
//     cin >> n >> m;
//     vl a(n);
//     rep(i,n) cin >> a[i];
//     ll s = 0,t = 0;
//     rep(i,m) s += a[i] * (i+1);
//     rep(i,m) t += a[i];
//     ll ans = s;
//     rep(i,n-m) {
//         ll ns = s - t + a[i+m]*m;
//         ll nt = t - a[i] + a[i+m];
//         s = ns;
//         t = nt;
//         ans = max(ans,s);
//     }
//     cout << ans << endl;
//     return 0;
// }