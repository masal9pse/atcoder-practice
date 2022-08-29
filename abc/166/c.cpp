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
    int n,m;
    cin >> n >> m;
    vector<int> h(n);
    rep(i,n) cin >> h[i];
    vector<bool> ok(n,true);
    rep(i,m) {
        int a,b;
        cin >> a >> b;
        a--;b--;
        if (h[a] <= h[b]) ok[a] = false;
        if (h[b] <= h[a]) ok[b] = false;
    }
    int ans = 0;
    rep(i,n) if (ok[i]) ans ++;
    cout << ans << endl;
    return 0;
}




// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<int> h(n);
//     vector<bool> ok(n, true);
//     rep(i, n) cin >> h[i];
//     rep(i, m)
//     {
//         int a, b;
//         cin >> a >> b;
//         a--;
//         b--;
//         if (h[a] <= h[b])
//             ok[a] = false;
//         if (h[b] <= h[a])
//             ok[b] = false;
//         int k = 3;
//     }
//     int ans = 0;
//     rep(i, n) if (ok[i]) ans++;
//     cout << ans << endl;
//     return 0;
// }

// // int main()
// // {
// //     int n, m;
// //     cin >> n >> m;
// //     vector<int> h(n);
// //     vector<bool> ok(n,true);
// //     rep(i,n) cin >> h[i];
// //     rep(i,m) {
// //         int a,b;
// //         cin >> a >> b;
// //         --a;b--;
// //         if (h[a] <= h[b]) ok[a] = false;
// //         if (h[b] <= h[a]) ok[b] = false;
// //         int k = 3;
// //     }
// //     int ans = 0;
// //     rep(i,n) if (ok[i]) ans ++;
// //     cout << ans << endl;
// // }

// // int main()
// // {
// //     int n, m;
// //     cin >> n >> m;
// //     vector<int> h(n);
// //     rep(i,n) cin >> h[i];
// //     vector<bool> ok(n,true);
// //     rep(i,m) {
// //         int a,b;
// //         cin >> a >> b;
// //         a--;--b;
// //         if (h[a] <= h[b]) ok[a] = false;
// //         if (h[b] <= h[a]) ok[b] = false;
// //     }
// //     int ans = 0;
// //     rep(i,n) {
// //         if (ok[i]) ans++;
// //     }
// //     cout << ans << endl;
// // }

// // int main()
// // {
// //     int n, m;
// //     cin >> n >> m;
// //     vector<int> h(n);
// //     vector<bool> ok(n, true);
// //     rep(i, n) cin >> h[i];
// //     rep(i, m)
// //     {
// //         int a, b;
// //         cin >> a >> b;
// //         --a;
// //         --b;
// //         if (h[a] <= h[b])
// //             ok[a] = false;
// //         if (h[b] <= h[a])
// //             ok[b] = false;
// //     }
// //     int ans = 0;
// //     rep(i, n) if (ok[i]) ans++;
// //     cout << ans << endl;
// //     return 0;
// // }