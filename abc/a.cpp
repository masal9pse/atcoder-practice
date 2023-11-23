// 2時間かかった
// テストケースを変更したいときはpaiza.ioで
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    bool is_A = false;
    bool is_B = false;
    bool is_C = false;
    rep(i,n) {
        if (s[i] == 'A') is_A = true;
        if (s[i] == 'B') is_B = true;
        if (s[i] == 'C') is_C = true;
        if (is_A && is_B && is_C) {
            ans = i+1;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}