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
    int n, m, x;
    cin >> n >> m >> x;
    vector<vector<int>> graph(n);
    rep(i, m)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    set<int> friends;
    for (auto v : graph[x])
        friends.insert(v);

    set<int> result;
    for (int v : graph[x])
    {
        for (auto w : graph[v])
        {
            if (w != x && !friends.count(w))
                result.insert(w);
        }
    }
    cout << result.size() << endl;
    return 0;

    // アルルとは友達ではないが、共通の友達がいるアルル以外の生徒
    // 友達の友達を出力
    // アルルの友達を取得してその要素を出力
    // その出力最中にアルルがいれば出力しない。
}