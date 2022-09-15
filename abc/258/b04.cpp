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
    int n;
    cin >> n;
    vector a(n, vector<int>(n));
    rep(i, n)
    {
        string s;
        cin >> s;
        rep(j, n)
        {
            a[i][j] = s[j] - '0';
        }
    }
    vector<int> di = {-1, -1, -1, 0, 0, 1, 1, 1};
    vector<int> dy = {-1, 0, 1, -1, 1, -1, 0, 1};
    ll ans = 0;
    // 始まりの位置を決める。
    rep(si, n) rep(sj, n)
    {
        // ８方向どれに進むかを決める。
        rep(v, 8)
        {
            // 移動する。
            ll x = 0;
            int i = si, j = sj;
            rep(k, n)
            {
                x = x * 10 + a[i][j];
                // 進む
                i += di[v];
                j += dy[v];

                // i + nをmod nすることで進んで、a[i] < nになってもn以下に戻せる。
                i = (i + n) % n;
                j = (j + n) % n;
            }
            // 通ったマスで最も大きい値を出力する。
            ans = max(ans, x);
        }
    }
    cout << ans << endl;
    return 0;
}