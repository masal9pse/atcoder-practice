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

int main() {
    int n;
    cin >> n;
    ll ans = 0;
    rep2(a,n) {
        ans += (n-1)/a;        
    }
    cout << ans << endl;
    return 0;
}

// int main()
// {
//     int n;
//     cin >> n;
//     ll ans = 0;
//     for (int a = 1; a <= n; a++)
//     {
//         ans += (a - 1)/a;
//     }
//     cout << ans << endl;
//     return 0;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     ll ans = 0;
//     for (int a = 1; a <= n; a++)
//     {
//         ans += (n-1)/a;
//     }
//     cout << ans << endl;
//     return 0;
// }