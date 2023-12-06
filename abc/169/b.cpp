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
    ll d = 1000000000000000000LL;
    int n;
    cin >> n;
    ll ans = 1;
    rep(i,n) {
        ll a;
        cin >> a;
        ans *= a;
    }
    if (d < ans) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }
    return 0;
}