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
#include <stack>
#include <queue>
#include <deque>
#include <numeric>
using namespace std;
using ll = long long;
template<class T> using P = pair<T, T>;
template<typename T> bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i,j, n) for (int i = j; i < n; i++)
#define all(x) (x).begin(), (x).end()
const double PI = acos(-1);
const int MI = 1e8;
const ll MLL = 1e18;


int main()
{
    int h, w, k;
    cin >> h >> w >> k;
    int result = 0;
    vector<string> grid(h);
    for (int i = 0; i < h; i++)
    {
        cin >> grid[i];
    }
    vector<int> dx = {1, -1, 0, 0};
    vector<int> dy = {0, 0, 1, -1};

    auto dfs = [&](auto dfs,int x, int y, int steps, vector<vector<bool>> &visited)
    {
        if (steps == k)
        { // 長さKに到達した場合
            result++;
            return;
        }

        rep(i,4)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < h && ny >= 0 && ny < w &&
                grid[nx][ny] == '.' && !visited[nx][ny])
            {
                visited[nx][ny] = true; 
                dfs(dfs,nx, ny, steps + 1, visited); 
                visited[nx][ny] = false;
            }
        }
    };

    rep(i,h)
    {
        rep(j,w)
        {
            if (grid[i][j] == '.')
            {
                vector<vector<bool>> visited(h, vector<bool>(w, false));
                visited[i][j] = true;
                dfs(dfs,i, j, 0, visited);
            }
        }
    }

    cout << result << endl;
    return 0;
}
