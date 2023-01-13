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
    int h,w;
    cin >> h >> w;
    // vector<string> s(h);
    // vector<string> t(h);
    vector<int> a;
    vector<int> b;
    // rep(i,h) cin >> h[i];
    rep(i,h) {
        string s;
        cin >> s;
        int count = 0;
        rep(i,s.size()) {
            if (s[i] == '#') count++;
        }
        a.push_back(count);
    }

    rep(qi,h) {
        string t;
        cin >> t;
        int count = 0;
        rep(i,t.size()) {
            if (t[i] == '#') count++;
        }
        b.push_back(count);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if (a == b) cout << "Yes" << endl;
    else  cout << "No" << endl;
    return 0;
}