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
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main () {
    ll x;
    int k;
    cin >> x >> k;
    ll t = 1;
    rep(i,k) {
        int d = x / t % 10;
        t *= 10;
        x = (x/t) * t;
        if (d >= 5) x += t;
    }
    cout << x << endl;
}




// int main() {
//     ll x;
//     int k;
//     int t = 1;
//     rep(i,k) {
//         int d = x / t % 10;
//         t *= 10;
//         x = (x/t)*t;
//         if (d >= 5) x += t;
//     }
//     cout << x << endl;
// }
// int main()
// {
//     ll x;
//     int k;
//     cin >> x >> k;
//     ll t = 1;
//     rep(i, k)
//     {
//         // 数字の霜１桁を取得する。 2048なら 8
//         int d = x / t % 10;        
//         t *= 10;
//         // 下１桁以外に0を増やしたものを求める。 2048なら 2040
//         x = x/t*t;
//         if (d >= 5) x += t;
//     }
//     cout << x << endl;
//     return 0;
// }