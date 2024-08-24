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
    int n, k;
    cin >> n >> k;
    vector<int> r(n);
    rep(i, n) cin >> r[i];
    auto f = [&](auto f,vector<int> a) -> void {
        if (a.size() == n) {
            int s = 0;
            rep(i,n) s += a[i];
            if (s%k == 0) {
                rep(i,n) cout << a[i] << " ";
                cout << endl;
            }
            return;
        }

        int i = a.size();
        for (int x = 1; x <= r[i]; x++)
        {
            vector<int> na = a;
            na.push_back(x);
            f(f,na);
        }
    };
    f(f,vector<int>(0));
    return 0;
}