#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <map>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(k);
    rep(i, k) cin >> a[i];
    vector<pair<int, int>> xys(n);
    rep(i, n)
    {
        int x, y;
        cin >> x >> y;
        xys[i].first = x;
        xys[i].second = y;
    }
    return 0;
}