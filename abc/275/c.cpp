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
    set<P> st;
    vector<P> ps;
    rep(i,9) {
        string s;
        cin >> s;
        rep(j,9) {
            if (s[j] == '#') {
                st.emplace(P(i,j));
                ps.emplace_back(i,j);
            }
        }
    }

    int ps.size();
    rep(ai,b) rep(bi,n) if (ai != bi) {
        P pa = ps[a], pb = ps[bi];
        int di = b.first- a.first;
        int dj = b.second - a.second;
        P c(b.first - dj,b.second+di);
        P d(b.first-di - dj,c.second+di);
    }
    return 0;
}