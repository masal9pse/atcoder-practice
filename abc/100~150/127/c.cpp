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
    int n, m;
    cin >> n >> m;
    vector<int> l(m), r(m);
    rep(i, m) cin >> l[i] >> r[i];
    int maxL = 1;
    int minR = n;
    rep(i, m)
    {
        maxL = max(maxL, l[i]);
        minR = min(minR, r[i]);
    }
    int ans = minR - maxL + 1;
    ans = max(0,ans);
    cout << ans << endl;
    return 0;
}