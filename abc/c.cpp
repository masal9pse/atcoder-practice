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
    int n,x;
    cin >> n >> x;
    vector<int> a(n-1);
    rep(i,n-1) cin >> a[i];
    // ansをA_0とするパターン
    vector<int> b = a;
    sort(b.begin(),b.end());
    int sum1 = 0;
    bool flag1 = false;
    rep(i,n-1) {
        if (i != n-2) sum1 += b[i];
    }

    if (x <= sum1) flag1 = true;
    else flag1 = false;
    if (flag1) {
        cout << 0 << endl;
        return 0;
    }

    // ansをA_n-1とするパターン
    int sum2 = 0;
    bool flag2 = false;
    rep(i,n-1) {
        if (i != 0) sum2 += b[i];
    }
    if (x <= sum2) flag2 = true;

    // 残り１つを最小値とするパターン
    int sum3 = 0;
    bool flag3 = false;
    rep(i,n-1) {
        if (i != 0 && i != n-2) sum3 += b[i];
    }
    int ans = x - sum3; 
    if (ans <= 100) flag3 = true;
    int all_ans = 10e8;
    // if (flag2) all_ans = min(all_ans,b[n-1]+1);
    if (flag3) all_ans = min(all_ans,ans);
    else all_ans = min(all_ans,-1);
    cout << all_ans << endl;
    return 0;
}