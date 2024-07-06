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
// #define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)

int main()
{
    int h,w,k;
    cin >> h >> w >> k;
    vector<string> s(h);
    rep(i,h) cin >> s[i];
    int ans = 0;
    // 塗るか塗らないか？
    rep(si,(1 << h)) rep(sj,(1 << w)) {
        int cnt = 0;
        // 表の中身を見る
        rep(i,h) rep(j,w) {
            // 塗るなら飛ばす
            if (si & (1 << i)) continue;
            if (sj & (1 << j)) continue;
            // 塗らないで中身が黒ならcnt++
            if (s[i][j] == '#') cnt++;
        }
        if (cnt == k) ans++;
    }
    cout << ans << endl;
    return 0;
}