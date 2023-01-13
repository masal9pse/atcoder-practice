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
#include <queue>
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
    int n;
    cin >> n;
    vector<int> d(n - 1);
    rep(i, n-1) cin >> d[i];
    vector<int> acc(n);
    rep(i, n-1)
    {
        acc[i + 1] = acc[i] + d[i];
    }
    int q;
    cin >> q;
    
    rep(i, q)
    {
        int l, r;
        cin >> l >> r;
        cout << acc[r] - acc[l] << endl;
    }
    return 0;
}