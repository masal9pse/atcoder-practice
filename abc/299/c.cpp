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
    /*
        vector<int> dを定義
        o-セットであることを忘れない。
        
        o だったら、d[i] += d[i-1] + 1 iが0なら o => d[i]++,- => 何もしない
        - だったら、d[i] = 0

        max_element(d) => 4
        max_element(d) => 0なら-1
    */
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> d(n);
    rep(i,n) {
        if (i == 0) {
            if (s[i] == 'o') d[i]++;
            continue;
        }
        if (s[i] == 'o') d[i] += d[i-1] + 1;
        else d[i] = 0;
    }
    int ans = *max_element(d.begin(),d.end());
    if (ans) cout << ans << endl;
    else cout << -1 << endl;
    return 0;
}