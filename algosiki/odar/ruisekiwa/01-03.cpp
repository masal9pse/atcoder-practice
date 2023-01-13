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
#include <queue>
using namespace std;
using ll = long long;
using P = pair<int, int>;
using vi = vector<int>;
using vs = vector<string>;
using mi = map<int, int>;
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    int q;
    cin >> q;
    vector<int> acc(n + 1);
    rep(i, n)
    {
        acc[i + 1] += acc[i] + a[i];
    }
    rep(i, q)
    {
        int k;
        cin >> k;
        cout << acc[k] << endl;
    }
    return 0;
}

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     rep(i,n) cin >> a[i];
//     int q;
//     cin >> q;
//     rep(i,q) {
//         int k;
//         cin >> k;
//         int ans = 0;
//         rep(j,k) {
//             ans += a[j];
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }