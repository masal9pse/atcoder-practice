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
const double PI = acos(-1);

int main()
{
    int n, m;
    cin >> n >> m;
    // vector<vector<int>> s(n, vector<int>(m));
    vector<vector<int>> s(n);
    vector<int> ks(m);
    // rep(i,n) rep(k,m)
    rep(i, m)
    {
        int k;
        cin >> k;
        ks[i] = k;
        rep(j, k)
        {
            int a;
            cin >> a;
            s[i].push_back(a);
        }
    }
    vector<int> p(m);
    rep(i, m) cin >> p[i];
    return 0;
}