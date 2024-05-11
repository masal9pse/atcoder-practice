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
    // キーワード　適切な範囲を見積もる
    ll b;
    cin >> b;
    // 16**16だとllがoverflowするので16
    // llの限界値は10^18程度
    // 16**16 == 10^19になる
    // これは解説が分かりやすい。　
    // https://atcoder.jp/contests/abc327/tasks/abc327_b
    rep(i,16) {
        ll ans = i;
        rep(j,i-1) {
            ans*=(ll)i;
        }
        if (ans == b) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}