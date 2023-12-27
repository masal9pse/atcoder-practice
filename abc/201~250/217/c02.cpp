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
    int n;
    cin >> n;
    vector<int> p(n+1),q(n+1);
    rep2(i,n) cin >> p[i];
    rep2(i,n) q[p[i]] = i;
    rep2(i,n) cout << q[i] << endl;
}

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> q(n);
//     rep(i, n) cin >> q[i];
//     map<int, int> mp;
//     rep(i, n)
//     {
//         mp[i + 1] = q[i];
//     }
//     rep(i, n)
//     {
//         cout << mp[q[i]] << endl;
//     }
//     return 0;
// }