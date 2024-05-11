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
#define rep2(i, n) for (int i = 1; i <= n; i++)

int main()
{
    int n;
    cin >> n;
    vector<int> s(n),t(n);
    rep(i,n) cin >> s[i];
    rep(i,n) cin >> t[i];
    rep(i,n) {
        if (i == 0) {
            cout << t[i] << endl;
            continue;
        }
        rep(i,n) {
            
        }
    }
    return 0;
}