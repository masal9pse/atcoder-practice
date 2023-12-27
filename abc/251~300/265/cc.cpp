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
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    int i = 0, j = 0;
    vector<vector<int>> visited(h, vector<int>(w));
    while (1)
    {
        if (visited[i][j])
        {
            cout << -1 << endl;
            return 0;
        }
        visited[i][j] = true;
        int ni = i, nj = j;
        // tmp変数を使わないとUとRが同時に実行された際にindex番号がずれる。
        if (s[i][j] == 'U')
            ni--;
        if (s[i][j] == 'D')
            ni++;
        if (s[i][j] == 'L')
            nj--;
        if (s[i][j] == 'R')
            nj++;
        if (ni >= h || nj >= w || ni < 0 || nj < 0)
            break;
        i = ni, j = nj;
    }
    return 0;
}