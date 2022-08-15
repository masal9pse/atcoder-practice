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

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    rep(i,n) cin >> c[i];
    // vector<int> cnt(n);
    map<int,int> cnt;
    // rep(i, n) cnt[a[i]]++;    
    rep(i, n) cnt[a[i]]++;

    ll ans = 0;
    // rep(j,n) ans += cnt[b[c[j]-1]];
    rep(j,n) ans += cnt[b[c[j]]];
    cout << ans << endl;
    return 0;
}