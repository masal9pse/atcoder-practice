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

int main()
{
    ll n;
    cin >> n;
    const ll mod = 998244353;
    cout << (n % mod + mod) % mod << endl;
    return 0;
}

// int main()
// {
//     ll n;
//     cin >> n;
//     const int c = 998244353;
//     n %= c;
//     if (n < 0) {
//         n += mod;
//     }
//     cout << n << endl;
// }

// // myans
// int main()
// {
//     ll n;
//     cin >> n;
//     const int c = 998244353;
//     rep(x,c) {
//         ll ans = n - x;
//         if (ans % c == 0) {
//             cout << x << endl;
//             return 0;
//         }
//     }
//     return 0;
// }