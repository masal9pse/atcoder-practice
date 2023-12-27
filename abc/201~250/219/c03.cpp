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
using mi = map<int,int>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    string x;
    int n;
    cin >> x;
    cin >> n;
    vs s(n);
    rep(i,n) cin >> s[i];
    map<char,char> f,g;
    rep(i,26) f[x[i]] = 'a'+i;
    rep(i,26) g['a'+i] = x[i];
    rep(i,n) for (char& c:s[i]) c = f[c];
    sort(s.begin(),s.end());
    rep(i,n) for (char& c:s[i]) c = g[c];
    rep(i,n) cout << s[i] << endl;
    return 0;
}