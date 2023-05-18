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
# define ALL(x) (x).begin(), (x).end()
# define SZ(x) ((int)(x).size())
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    int n,k;
    cin >> n >> k;
    vector<string> s(n);
    rep(i,n) cin >> s[i];
    // sort(s.begin(),s.end());
    vector<string> o(k);
    rep(i,k) {
        // cout << s[i] << endl;
        o[i] = s[i];
    }
    sort(o.begin(),o.end());
    rep(i,k) {
        cout << o[i] << endl;
    }
    return 0;
}