#include <bits/stdc++.h>
using namespace std;

// 頂点 v を始点とした深さ優先探索
void rec(int v, vector<vector<int>> &G, vector<bool> &seen) {
    // 頂点 v を黒く塗る (= seen[v] を true に変える)
    seen[v] = true;
    // v を出力する
    cout << v << " ";
    // G[v] に含まれる頂点 v2 について、
    for(auto v2 : G[v]) {
        // v2 がすでに黒く塗られているならば、スキップする
        if(seen[v2]) {continue;}
        // v2 始点で深さ優先探索を行う (関数を再帰させる)
        rec(v2, G, seen);
    }
    return;
}

int main() {
    // 入力を受け取る
    int N, M; cin >> N >> M;
    vector<vector<int>> G(N);   // グラフを表現する隣接リスト
    for(int i = 0; i < M; ++i) {
        int a, b; cin >> a >> b;
        // 頂点 a から頂点 b への辺を隣接リストに入れる
        G[a].push_back(b);
    }

    // 問題文より、各 G[v] は小さい順に並べる
    for(int v = 0; v < N; ++v) {
        sort(G[v].begin(), G[v].end());
    }

    vector<bool> seen(N, false);    // seen[v]：頂点 v が黒く塗られいているなら true, そうでないなら false
    // 頂点 0 を始点として深さ優先探索を開始する
    rec(0, G, seen);

	return 0;
}