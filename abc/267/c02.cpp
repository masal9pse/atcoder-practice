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
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    ll s = 0,t = 0;
    rep(i,m) s += a[i] * (i+1);
    rep(i,m) t += a[i];
    ll ans = s;
    rep(i,n-m) {
        ll ns = s - t+a[i+m]*m;
        ll nt = t - a[i] + a[i+m];
        s = ns;
        t = nt;
        ans = max(s,ans);
    }
    cout << ans << endl;
}

// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<ll> a(n);
//     rep(i, n) cin >> a[i];
//     ll s = 0,t = 0;
//     // 初期値(s_1,t_1)の定義
//     rep(i,m) s += a[i] * (i+1);
//     rep(i,m) t += a[i];
//     // s_2を求める。s_2 = s_1 - (t_1 - a[i+1]* m)   
//     // t_2を求める。t_2 = t - a[i] + a[i+1]
//     ll ans = s;
//     rep(i,n-mm) {
//         ll ns = s - t + a[i+m]*m;
//         ll nt = t - a[i] + a[i+m];
//         s = ns;
//         t = nt;
//         int o = 3;
//         ans = max(ans,s);
//         int k = 3;
//     }
//     cout << ans << endl;
//     return 0;
// }


// int main() {
//     int n,m;
//     cin >> n >> m;
//     vector<int> a(n);
//     rep(i,n) cin >> a[i];
//     ll s = 0,t = 0;
//     rep(i,m) s += a[i] * (i+1);
//     rep(i,m) t += a[i];
//     ll ans = s;
//     rep(i,n-m) {
//         ll ns = s - t + a[i+m] * m;
//         ll nt = t - a[i] + a[i+m];
//         s = ns;
//         t = nt;
//         ans = max(ans,s);
//         int kk = 3;
//     }
//     cout << ans << endl;
//     return 0;
// }

// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<ll> a(n);
//     rep(i, n) cin >> a[i];
//     ll s = 0, t = 0;
//     rep(i, m) s += a[i] * (i + 1);
//     rep(i, m) t += a[i];
//     ll ans = s;
//     rep(i, n - m)
//     {
//         ll ns = s - t + a[i + m] * m;
//         ll nt = t - a[i] + a[i + m];
//         s = ns;
//         t = nt;
//         ans = max(ans, s);
//     }
//     cout << ans << endl;
//     return 0;
// }

// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<ll> a(n);
//     rep(i, n) cin >> a[i];
//     ll s = 0,t = 0;
//     rep(i,m) s += a[i] * (i+1);
//     rep(i,m) t += a[i];
//     ll ans = s;
//     rep(i,n-m) {
//         ll ns = s-t+a[i+m]*m;
//         ll nt = t - a[i] + a[i+m];
//         s = ns; t = nt;
//         ans = max(ans,s);
//     }
//     cout << ans << endl;
//     return 0;
// }

// 後ほど提出
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<ll> a(n);
//     rep(i, n) cin >> a[i];
//     ll ans = 0;
//     rep(i, n)
//     {
//         int si = 1;
//         ll x = 0;
//         int mi = m + i;
//         int kk = 3;
//         for (int j = i; j < mi; j++)
//         {
//             x += si * a[j];
//             si++;
//             int kk = 3;
//         }
//         ans = max(ans, x);
//     }
//     cout << ans << endl;
//     return 0;
// }