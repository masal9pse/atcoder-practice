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
    int max_v = -1;
    int max_i = -1;
    int first_v = -1;
    rep(i,n) {
        int p;
        cin >> p;
        if (i == 0) first_v = p;
        // max_v = max(max_v,p);
        if (max_v <= p) {
            max_v = p;
            max_i = i;
        }
    }
    // 人１が最強のケース
    if (max_i == 0) {
        cout << 0 << endl;
    }
    // そうでないケース
    else {
        max_v ++;
        int ans = max_v - first_v;
        cout << ans << endl;
    }
    return 0;
}