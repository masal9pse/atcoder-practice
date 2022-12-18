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
#include <queue>
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

// int H,W,Q;
// int X[1509][1509],
int main()
{
    int h,w;
    cin >> h >> w;
    vector<vector<int>> x(h,vector<int>(w));
    rep(i,h) rep(j,w) cin >> x[i][j];
    int q;
    cin >> q;
    vector<int> a(q),b(q),c(q),d(q);
    rep(i,q) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }
    vector<vector<int>> z(h,vector<int>(w));
    
    rep(i,h) {
        rep(j,w) {
            z[i][j] = z[i][j-1] + x[i][j];
        }
    }
    return 0;
}