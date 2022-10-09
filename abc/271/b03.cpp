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
    int n, q;
    cin >> n >> q;
    vector<vector<int>> as(n);
    rep(i, n)
    {
        int l;
        cin >> l;
        rep(j, l)
        {
            int a;
            cin >> a;
            as[i].push_back(a);
        }
    }
    rep(i,q) {
        int s,t;
        cin >> s >> t;
        --s;--t;
        cout << as[s][t] << endl;
    }
    return 0;
}