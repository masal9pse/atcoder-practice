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
    int h,w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];
    rep(i,h) {
        rep(j,w-1) {
            if (s[i][j] == 'T' && s[i][j+1] == 'T' && 0 <= i <= h && 0 <= j <= w) {
                s[i][j] = 'P';
                s[i][j+1] = 'C';
            }
        }
    }
    rep(i,h) {
        cout << s[i] << endl;
    }
    return 0;
}