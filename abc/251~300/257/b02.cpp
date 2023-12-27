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

int main() {
    int n,k,q;
    cin >> n >> k >> q;
    vector<int> a(k);
    rep(i,k) cin >> a[i];
    rep(qi,q) {
        int l;
        cin >> l;
        l--;
        if (a[l] == n) continue;
        // if (l < k-1 && a[l]+1 == a[l+1]) continue;
        if (a[l]+1 == a[l+1]) continue;
        a[l]++;
    }
    rep(i,k) cout << a[i] << endl;
    return 0;
}

// int main () {
//     int n,k,q;
//     cin >> n >> k >> q;
//     vector<int> a(k);
//     rep(i,k) cin >> a[i];
//     rep(qi,q) {
//         int l;
//         cin >> l;
//         l--;
//         if (a[l] == n) continue;
//         if (l < k-1 && a[l]+1 == a[l+1]) continue;
//         a[l]++;
//     }
//     rep(i,k) cout << a[i] << endl;
//     return 0;
// }

// int main()
// {
//     int n, k, q;
//     cin >> n >> k >> q;
//     vector<bool> a_flag(n);
//     vector<int> a(k), l(q);
//     rep(i, k) cin >> a[i];
//     rep(i, k)-- a[i];
//     rep(i, k) a_flag[a[i]] = true;
//     rep(i, q) cin >> l[i];
//     // rep(i, q)-- l[i];
//     // rep(i, k)
//     // {
//     rep(i, q)
//     {
//         if (!a_flag[l[i] + 1])
//         {
//             if (a[l[i]] != n)
//             {
//                 a_flag[l[i]] = false;
//                 a_flag[l[i] + 1] = true;
//                 a[l[i]]++;
//                 int k = 3;
//             }
//         }
//     }
//     // a[l[]]++;
//     // }
//     rep(i, n)
//     {
//         if (a_flag[i])
//             cout << i + 1 << endl;
//     }
//     return 0;
// }