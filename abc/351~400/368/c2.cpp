#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long compute_turns(long long health) {
    // 最大ターン数を求めるための計算
    long long turns = (health + 2) / 3;  // 各ターンで最大3減る

    return turns * 3;  // 最悪の場合を見積もるため、ターン数に3を掛ける
}

int main() {
    int n;
    cin >> n;

    vector<long long> h(n);
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
    }

    long long t = 0;
    int i = 0;

    while (i < n) {
        // 体力が残っている敵の最大ターン数を計算
        long long max_turns = compute_turns(h[i]);

        // 次の敵が全て体力が0以下になるターン数を見積もる
        t += max_turns;
        i++;
    }

    cout << t << endl;

    return 0;
}
