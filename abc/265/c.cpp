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
const double PI = acos(-1);

int main()
{
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, h) cin >> s[i];
    pair<int, int> now = {0, 0};
    // vector<vector<int>> a(3, vector<int>(3))
    vector<vector<int>> b(h, vector<int>(w));
    int i = 0, j = 0;
    while (1)
    {
        if (s[i][j] == 'U' && i != 0)
        {
            if (b[i][j] == 0)
            {
                b[i][j] = 1;
                int k = 3;
            }
            else
            {
                cout << -1 << endl;
                return 0;
            }
            i++;
            if (i >= h || i < 0 || j >= w || j < 0) break;
        }
        if (s[i][j] == 'D' && i != h - 1)
        {
            if (b[i][j] == 0)
            {
                b[i][j] = 1;
            }
            else
            {
                cout << -1 << endl;
                return 0;
            }
            now.first += 1;
            if (i >= h || i < 0 || j >= w || j < 0) break;
        }
        if (s[i][j] == 'L' && j != 0)
        {
            if (b[i][j] == 0)
            {
                b[i][j] = 1;
                int k = 3;
            }
            else
            {
                cout << -1 << endl;
                return 0;
            }
            now.second -= 1;
            if (i >= h || i < 0 || j >= w || j < 0) break;
        }
        if (s[i][j] == 'R' && j != w - 1)
        {
            if (b[i][j] == 0)
            {
                b[i][j] = 1;
            }
            else
            {
                cout << -1 << endl;
                return 0;
            }
            now.second += 1;
            if (i >= h || i < 0 || j >= w || j < 0) break;
        }
    }

    cout << now.first + 1 << " " << now.second + 1 << endl;
    return 0;
}