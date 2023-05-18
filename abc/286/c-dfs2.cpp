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

vector<int> isPassed(101010, false);
vector<vector<int>> graph(101010);

// dfs(今いるノード, 一つ前にいたノード)
bool dfs(const int current, const int before)
{
    isPassed[current] = true;
    for (int i = 0; i < graph[current].size(); i++)
    {
        if (graph[current][i] == before)
        {
            // 前のノードに戻る場合
            continue;
        }
        if (isPassed[graph[current][i]])
        {
            // 次に行くノードがかこに通ったことがある場合
            return true;
        }
        dfs(graph[current][i], current);
    }
    return false;
}

int main()
{

    int n, m;
    cin >> n >> m;

    rep(i, m)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    bool hasLoop = dfs(0, -1);
    int count = 0;
    if (hasLoop)
    {
        count++;
        // cout <<  << endl;
    }
    else
    {
        // cout << "閉路はありません" << endl;
    }
    cout << count << endl;
}