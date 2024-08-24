#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> R(N);

    for (int i = 0; i < N; ++i) {
        cin >> R[i];
    }

    vector<int> seq;
    // 最初の順列を作成
    for (int i = 0; i < N; ++i) {
        for (int j = 1; j <= R[i]; ++j) {
            seq.push_back(j);
        }
    }

    sort(seq.begin(), seq.end());

    // 全ての順列を生成
    do {
        // 各順列の合計を計算
        int sum = 0;
        for (int i = 0; i < N; ++i) {
            sum += seq[i];
        }

        // 合計がKの倍数なら出力
        if (sum % K == 0) {
            for (int i = 0; i < N; ++i) {
                cout << seq[i] << " ";
            }
            cout << endl;
        }
    } while (next_permutation(seq.begin(), seq.end()));

    return 0;
}
