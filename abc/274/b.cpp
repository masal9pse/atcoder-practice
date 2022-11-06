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
    int h, w;
    cin >> h >> w;
    vector<string> c(h);
    rep(i, h) cin >> c[i];
    vector<vector<string>> d(w, vector<string>(h));

    // rep(i,h) rep(j,w) {
    //     d[i][j] = c[j][i];
    // }
    rep(i, w) rep(j, h)
    {
        d[i][j] = c[j][i];
    }
    rep(i, w)
    {
        int count = 0;
        rep(j, h)
        {
            if (d[i][j] == "#")
            {
                count++;
            }
        }
        cout << count << " ";
    }
    return 0;
}