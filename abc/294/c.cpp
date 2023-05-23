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
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    rep(i,n) cin >> a[i];
    rep(i,m) cin >> b[i];
    vector<P> c;
    rep(i,n) c.emplace_back(a[i],i);
    rep(i,m) c.emplace_back(b[i],n+i);
    sort(c.begin(),c.end());
    vector<int> ai(n),bi(m);
    rep(i,n + m) {
        int idx = c[i].second;
        // n以下であればA
        // n以上であればB
        if (idx < n) ai[idx] = i;
        else bi[idx - n] = i;
    }
    rep(i,n) cout << ai[i] + 1 << " ";
    cout << endl;
    rep(i,m) cout << bi[i] + 1 << " ";
    cout << endl;
    return 0;
}