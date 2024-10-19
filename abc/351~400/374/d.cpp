#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

// 座標間の距離を求める関数
double dist(double x1, double y1, double x2, double y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main() {
    int n;
    double s, t;
    cin >> n >> s >> t;
    
    vector<double> ax(n), ay(n), cx(n), cy(n);

    // 各線分の端点を入力
    for (int i = 0; i < n; i++) {
        cin >> ax[i] >> ay[i] >> cx[i] >> cy[i];
    }

    // 順列を全探索するためのインデックス配列
    vector<int> perm(n);
    for (int i = 0; i < n; i++) perm[i] = i;

    double answer = 1e18;  // 最小時間を無限大で初期化

    // 全順列探索
    do {
        // 各順列に対して2通り（どちらの端点を先に印字するか）を試す
        for (int start = 0; start < 2; ++start) {
            double time = 0.0;
            double x = 0.0, y = 0.0;  // 現在のレーザ位置 (初期位置は 0, 0)

            // 初めの線分の端点に移動
            if (start == 0) {
                time += dist(0, 0, ax[perm[0]], ay[perm[0]]) / s;
                x = ax[perm[0]], y = ay[perm[0]];
            } else {
                time += dist(0, 0, cx[perm[0]], cy[perm[0]]) / s;
                x = cx[perm[0]], y = cy[perm[0]];
            }

            // 線分を印字しながら移動
            time += dist(ax[perm[0]], ay[perm[0]], cx[perm[0]], cy[perm[0]]) / t;

            // 他の線分も順番に処理
            for (int i = 1; i < n; ++i) {
                // 2つの端点に移動する場合の時間を比較
                double option1 = dist(x, y, ax[perm[i]], ay[perm[i]]) / s;  // (x, y) -> (Ax, Ay)
                double option2 = dist(x, y, cx[perm[i]], cy[perm[i]]) / s;  // (x, y) -> (Cx, Cy)

                if (option1 < option2) {
                    // Ax -> Cxへ印字
                    time += option1;
                    time += dist(ax[perm[i]], ay[perm[i]], cx[perm[i]], cy[perm[i]]) / t;
                    x = cx[perm[i]], y = cy[perm[i]];
                } else {
                    // Cx -> Axへ印字
                    time += option2;
                    time += dist(cx[perm[i]], cy[perm[i]], ax[perm[i]], ay[perm[i]]) / t;
                    x = ax[perm[i]], y = ay[perm[i]];
                }
            }

            // 最後の線分から (0, 0) への移動時間を追加
            time += dist(x, y, 0, 0) / s;

            // 最小時間を更新
            answer = min(answer, time);
        }
    } while (next_permutation(perm.begin(), perm.end()));

    // 最小時間を出力
    cout << fixed << answer << endl;

    return 0;
}
