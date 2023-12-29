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
# define ALL(x) (x).begin(), (x).end()
# define SZ(x) ((int)(x).size())
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    int n,v;
    cin >> n >> v;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    bool ans = false;
    int aa = 1 << n;
    rep(s,(1 << n)) {
        int total = 0;
        rep(i,n) {
            if (s & (1 << i)) {
                total += a[i];
                int k = 3;
            }
        }
        if (total == v) ans = true;
    }
    return 0;
}