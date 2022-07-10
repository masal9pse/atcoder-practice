#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
#include <map>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ai = 0, bi = 0;
    int ans = pow(10, 9) - 1;
    while (ai < n && bi < m)
    {
        ans = min(ans,abs(a[ai]-b[bi]));
        if (a[ai] < b[bi]) ai++;
        else bi++; 
    }
    cout << ans << endl;
    return 0;
}