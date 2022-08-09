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
    vector<pair<int, int>> uv;
    vector<int> u;
    vector<int, int> v;
    rep(i, m) cin >> u[i] >> v[i];
    int ans = 0;
    rep(i, m) rep(j, i) rep(k, j)
    {
        //    if (u[i] == v[j])
        if (u[i] == u[j] || u[i] == v[j] && u[i] == u[k] || u[i] == v[k]) {
            // cout
            // ３重ループのbreak抜けるのめんどい。
        }

        // if (|| u[i] == v[k] && u[j] == u[k] || u[j] == v[])
    }
    return 0;
}