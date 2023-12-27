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
    vector<int> a(n),b(m);
    rep(i,n) cin >> a[i];
    rep(i,m) cin >> b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int ai = 0,bi = 0;
    int ans = 1001001001;
    while (ai < n && bi < m)
    {
        ans = min(ans,abs(a[ai]-b[bi]));
        if (a[ai] < b[bi]) ai++; else bi++;
    }
    cout << ans << endl;
    return 0;
}