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
    vector<string> s(h);
    rep(i, h) cin >> s[i];
    int now_sharp_count = 10e8;
    rep(i, h)
    {
        int sharp_count = 0;
        rep(j, w)
        {
            if (s[i][j] == '#')
                sharp_count++;
        }
        if (sharp_count != 0)
            now_sharp_count = min(now_sharp_count, sharp_count);
    }
    int ans_index = 0;
    rep(i, h)
    {
        int sharp_count = 0;
        rep(j, w)
        {
            if (s[i][j] == '#')
                sharp_count++;
        }
        if (now_sharp_count == sharp_count)
        {
            ans_index = i;
            break;
        }
    }
    int c = -1;
    int d = -1;
    rep(i, h)
    {
        if (i != ans_index)
        {
            rep(j, w)
            {
                if (c >= 0 && s[i][j] == '#')
                {
                    d = j;
                    continue;
                }
                if (s[i][j] == '#')
                {
                    c = j;
                    continue;
                }
            }
        }
    }
    int n = s[ans_index].size();
    int ans_j;
    for (int i = c; i <= d; i++)
    {
        if (s[ans_index][i] == '.')
            ans_j = i;
    }
    cout << "\n" << endl;
    cout << ans_index + 1 << " " << ans_j + 1 << endl;
    return 0;
}