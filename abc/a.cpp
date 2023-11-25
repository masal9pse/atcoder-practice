// 37
// qeixfumagitvtophbepfepxbfgsqcugugpugt
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
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    // rep(i,n) {
    //     if (l <= a[i] && a[i] <= r) is_judge = true;
    // }
    // i = 3の際に 7 - 4 = 3にで条件を満たさなくなってしまう。
    rep(i, n)
    {
        bool is_judge = false;
        int ans = -1;
        for (int x = l; x <= r; x++)
        {
            // xがyになる可能性もあるな
            // int calc = abs(y-a[i]);
            if (l <= x && x <= r)
            {
                for (int y = l; y <= r; y++)
                {
                    if (abs(x - a[i]) <= abs(y - a[i])) {
                        ans = x;
                        break;
                    }
                }
            }
        }
        cout << ans << " ";
    }
    cout << endl;
    return 0;
}