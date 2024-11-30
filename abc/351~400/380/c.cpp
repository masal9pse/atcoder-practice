#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // 入力の読み込み
    int N, T;
    cin >> N >> T;
    string S;
    cin >> S;
    vector<long long> X(N);
    for (int i = 0; i < N; i++) {
        cin >> X[i];
    }

    // すれ違い回数をカウント
    int answer = 0;

    // 右向きの蟻のインデックスを格納するスタック
    vector<long long> right_ants;

    for (int i = 0; i < N; i++) {
        if (S[i] == '1') {
            // 右向きの蟻
            right_ants.push_back(X[i]);
        } else {
            // 左向きの蟻が来たら、右向きの蟻とすれ違う
            // 右向きの蟻が右の位置にいる限りすれ違う
            for (long long x : right_ants) {
                if (x < X[i]) {
                    answer++;
                }
            }
        }
    }

    // 結果の出力
    cout << answer << endl;
    return 0;
}
