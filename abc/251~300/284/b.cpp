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
    int t;
    cin >> t;
    rep(i,t) {
        int n;
        cin >> n;
        int ans = 0;
        rep(i,n) {
            int a;
            cin >> a;
            if (a % 2 != 0) ans++;
            if (i == n-1) cout << ans << endl;
        }
    }
    return 0;
}