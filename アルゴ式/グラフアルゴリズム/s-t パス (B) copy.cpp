#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    // 入力を受け取る
    int N, M, s, t;
    cin >> N >> M >> s >> t;
    vector<vector<int>> G(N); // グラフを表現する隣接リスト
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b); // 頂点 a から頂点 b への辺を張る
    }

    vector<bool> seen(N, false); // seen[v]: 頂点 v が探索済みか
    vector<int> prev(N, -1);     // prev[v]: 幅優先探索の際、頂点 v の前にどの頂点を見ていたか

    // BFS の処理を直接記述
    queue<int> que;
    seen[s] = true;
    que.push(s);

    while (!que.empty()) {
        int v = que.front();
        que.pop();
        for (auto nv : G[v]) {
            if (seen[nv])
                continue;
            seen[nv] = true;
            prev[nv] = v;
            que.push(nv);
        }
    }

    vector<int> order; // s-t パスを保存する配列
    // 頂点 t を開始点として prev をさかのぼることで、s-t パスを求める
    int now = t;
    while (now != s) {
        order.push_back(now);
        now = prev[now];
    }
    order.push_back(s);
    // 配列 order を反転させる
    reverse(order.begin(), order.end());

    // 答えをフォーマット通りに出力する
    cout << order.size() << endl;
    for (int i = 0; i < order.size(); ++i) {
        cout << order[i];
        if (i != order.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
