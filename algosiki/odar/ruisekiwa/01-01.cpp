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
#include <numeric>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    int n, q;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    cin >> q;
    // vector<int> k(q);
    // rep(i, q) cin >> k[i];
    vector<ll> ans(n+1);
    rep(i,n) {
        ans[i+1] = ans[i] + a[i];
    }
    rep(i,q) {
        int k;
        cin >> k;
        cout << ans[k] << endl;
    }
    // rep(i,q) {
    //     cout << ans[k[i]] << endl;        
    // }
    return 0;
}