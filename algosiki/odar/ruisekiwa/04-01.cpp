#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 入力
    int N, D;
    cin >> N >> D;
    vector<int> X(N);
    for (int i=0; i<N; ++i) cin >> X[i];

    // acc[i] = 日 0 から 日 i より前までの合計来場者数
    vector<int> acc(N+1);
    for (int i=0; i<N; ++i) {
        acc[i+1] = acc[i] + X[i];
    }

    // max_sum = 答えとなる期間の開始日
    // max_period_visitor = 日 max_sum を起点とする連続した D 日間の合計来場者数
    int max_period_visitor = -1;
    int max_start = 0;
    for (int i=0; i<N-D+1; ++i) {
        int period_visitor = acc[i+D] - acc[i];
        if (period_visitor >= max_period_visitor) {
            max_start = i;
            max_period_visitor = period_visitor;
        }
    }

    // max_end = 答えとなる期間の終了日
    int max_end = max_start + D - 1;

    // 出力
    cout << max_start << "~" << max_end << endl;
    return 0;
}