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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    rep(i, m)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int count = 0;

    rep(i, n)
    {
        // todo リストを表すキュー
        queue<int> que;

        // 頂点 0 を始点とする
        dist[i] = i;
        que.push(i);

        
    }

    int count = 0;
    // 各頂点が何手目に探索されたか
    // -1 は「まだ探索されていない」ことを表す
    // vector<int> dist(N, -1);

    // todo リストを表すキュー
    queue<int> que;

    // 頂点 0 を始点とする
    dist[0] = 0;
    que.push(0);

    // キューが空になるまで探索する
    while (!que.empty())
    {
        // キューから頂点を取り出す
        int v = que.front();
        que.pop();
        vector<bool> dist(n, -1);

        // 頂点 v から 1 手で行ける頂点 next_v を探索
        for (auto next_v : G[v])
        {
            // 頂点 next_v が探索済みであれば何もしない
            if (dist[next_v] != -1)
            {
                continue;
            }

            // 頂点 next_v を探索する
            dist[next_v] = dist[v] + 1;
            que.push(next_v);
        }
    }
    return 0;
}