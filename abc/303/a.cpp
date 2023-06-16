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

// 1
// i
// l
int main()
{
    int n;
    cin >> n;
    string s,t;
    cin >> s;
    cin >> t;
    rep(i,n) {
        if (s[i] == 'l') s[i] = '1';
        if (t[i] == 'l') t[i] = '1';        
        if (s[i] == 'o') s[i] = '0';
        if (t[i] == 'o') t[i] = '0';
    }
    rep(i,n) {
        if (s[i] != t[i]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}