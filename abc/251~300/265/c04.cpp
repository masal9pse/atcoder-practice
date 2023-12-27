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
using mi = map<int, int>;
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    int h, w;
    cin >> h >> w;
    vs g(h);
    rep(i, h) cin >> g[i];
    int i = 0, j = 0;
    vector<vector<bool>> b(h, vector<bool>(w));
    while (1)
    {
        if (b[i][j])
        {
            cout << -1 << endl;
            return 0;
        }
        b[i][j] = true;
        int ni = i, nj = j;
        if (g[i][j] == 'U')
            ni--;
        if (g[i][j] == 'D')
            ni++;
        if (g[i][j] == 'L')
            nj--;
        if (g[i][j] == 'R')
            nj++;
        if (ni >= h || ni < 0 || nj >= w || nj < 0)
            break;
        i = ni;
        j = nj;
    }
    printf("%d %d", i + 1, j + 1);
    return 0;
}

// int main()
// {
//     int h, w;
//     cin >> h >> w;
//     vs g(h);
//     rep(i, h) cin >> g[i];
//     int i = 0, j = 0;
//     vector<vector<bool>> b(h, vector<bool>(w));
//     while (1)
//     {
//         if (b[i][j])
//         {
//             cout << -1 << endl;
//             return 0;
//         }
//         b[i][j] = true;
//         if (g[i][j] == 'U' && i != 0)
//             i--;
//         if (g[i][j] == 'D' && i != h)
//             i++;
//         if (g[i][j] == 'L' && j != 0)
//             j--;
//         if (g[i][j] == 'R' && j != w)
//             j++;
//         if (i >= h || i < 0 || j >= w || j < 0) break;
//     }
//     printf("%d %d", i + 1, j + 1);
//     return 0;
// }