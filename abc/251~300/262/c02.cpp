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
# define ALL(x) (x).begin(), (x).end()
# define SZ(x) ((int)(x).size())
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    int n;
    cin >> n;
    vi a(n);
    rep(i,n) cin >> a[i];
    rep(i,n) --a[i];
    ll x= 0;
    rep(i,n) if (a[i] == i) x++;
    // 
    ll ans = x*(x-1)/2;
    rep(i,n) {
        if (a[i] <= i) continue;
        if (a[a[i]] == i) ans++;
    } 
    cout << ans << endl;
    // cout << a[5] << endl;// output:0
    return 0;
}