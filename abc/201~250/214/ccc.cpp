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
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    int n;
    cin >> n;
    vector<int> s(n),t(n);
    rep(i,n) cin >> s[i];
    rep(i,n) cin >> t[i];
    // なぜ２週しているのかがわからない。
    rep(i,n*2) {
        t[(i+1)%n] = min(t[(i+1)%n],s[i%n]+t[i%n]);
    }
    rep(i,n) cout << t[i] << endl;
    return 0;
}