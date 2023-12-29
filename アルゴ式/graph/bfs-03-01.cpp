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
    int h, w;
    cin >> h >> w;
    int x0, y0, x1, y1;
    cin >> x0 >> y0 >> x1 >> y1;
    vector<string> g(h);
    rep(i, h) cin >> g[i];
    vector<vector<int>> seen(h, vector<int>(w, -1));
    seen[x0][y0] = 0;
    queue<P> que;
    que.push(P(0, 0));
    vector<int> dx = {-1, 0, 1, 0};
    vector<int> dy = {0, 1, 0, -1};
    while (!que.empty())
    {
        auto [x, y] = que.front();
        que.pop();
        rep(k, 4)
        {
            int x2 = x + dx[k];
            int y2 = y + dy[k];
            if (x2 < 0 || x2 >= h || y2 < 0 || y2 >= w || g[x2][y2] == 'B')
            {
                continue;
            }
            if (seen[x2][y2] != -1)
            {
                continue;
            }
            seen[x2][y2] = seen[x][y] + 1;
            que.push(P(x2, y2));
        }
    }
    cout << seen[x1][y1] << endl;
    return 0;
}