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
    vector<int> w(n),x(n);
    rep(i,n) cin >> w[i] >> x[i];
    int ans = 0;
    rep(t,24) {
        int sum = 0;
        rep(i,n) {
            int real_t = (t + x[i]) % 24;
            if (9 <= real_t && real_t < 18) sum += w[i];
        }
        ans = max(sum,ans);
    }
    cout << ans << endl;
    return 0;
}