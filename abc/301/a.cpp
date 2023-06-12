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
    string s,t;
    cin >> s;
    cin >> t;
    // あとでテストケースを見る。
    rep(i,n) {
        if (s[i] == 'l' || t[i] == 'l') {
           s[i] = '1';
           t[i] = '1';
        }
        if (s[i] == 'o' || t[i] == 'o') {
           s[i] = '0';
           t[i] = '0';
        }
    } 
    if (s == t) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}