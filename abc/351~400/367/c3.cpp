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

int n, k;
vector<int> a(8);
vector<int> r(8);
// vector<int> r(n);
void f (int lv) {
    if (lv == n) {
        int sum = 0;
        rep(i,n) sum += a[i];
        if (sum%k == 0) {
            rep(i,n) cout << a[i] << " ";
            cout << endl;
        }
        return;
    }
    for (int i = 1; i <= r[lv]; i++)
    {
        a[lv] = i;
        f(lv+1);
    }
    
}

int main()
{
    cin >> n >> k;
    rep(i, n) cin >> r[i];
    f(0);
    return 0;
}