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

int main()
{
    int n;
    cin >> n;
    vector<string> a(n);
    rep(i, n) cin >> a[i];
    rep(i, n)
    {
        rep(j, n)
        {
            if (i == j && a[i][j] != '-') {
                cout << "incorrect" << endl;
                return 0;
            }
            if (a[i][j] == 'W' && a[j][i] == 'W' || a[i][j] == 'W' && a[j][i] == 'D') {
                cout << "incorrect" << endl;
                return 0;
            }
            if (a[i][j] == 'L' && a[j][i] == 'L' || a[j][i] == 'L' && a[j][i] == 'D') {
                cout << "incorrect" << endl;
                return 0;
            }
            if (a[i][j] == 'D' && a[j][i] == 'W' || a[i][j] == 'D' && a[j][i] == 'L') {
                cout << "incorrect" << endl;
                return 0;
            }
        }
    }
    cout << "correct" << endl;
    return 0;
}