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
    vector<int> p(n);
    vector<vector<int>> f(n);
    rep(i,n) {
        int c;
        cin >> p[i] >> c;
        f[i] = vector<int>(c);
        rep(j,c) cin >> f[i][j];
    }
    rep(i,n) rep(j,n) 
}