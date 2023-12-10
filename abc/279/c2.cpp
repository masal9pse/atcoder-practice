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
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    /*
      s[i][j]のt[i][j]の##の数を数えて、同じでなければNoを出力する
    */
    int h, w;
    cin >> h >> w;
    vector<string> s(h), t(h);
    rep(i, h) cin >> s[i];
    rep(i, h) cin >> t[i];
    rep(i, h)
    {
        int s_count = 0;
        int t_count = 0;
        rep(j, w)
        {
            if (s[i][j] == '#') s_count++;
            if (t[i][j] == '#') t_count++;
        }
        if (s_count != t_count) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}