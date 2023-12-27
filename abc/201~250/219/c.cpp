#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
#include <map>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    string x;
    cin >> x;
    int n;
    cin >> n;
    vector<string> s(n);
    map<char, char> f;
    map<char, char> g;
    rep(i, n) cin >> s[i];
    rep(i, 26) f[x[i]] = 'a' + i;
    rep(i, 26) g['a' + i] = x[i];
    rep(i, n) for (char &c : s[i])
    {
        c = f[c];
    }
    sort(s.begin(), s.end());
    rep(i, n) for (char &c : s[i])
    {
        c = g[c];
    }
    rep(i, n) cout << s[i] << endl;
    return 0;
}