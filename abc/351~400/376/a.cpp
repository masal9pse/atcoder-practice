#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> L(N), R(N);
    
    for (int i = 0; i < N; i++) {
        cin >> L[i] >> R[i];
    }

    // 条件を満たさない区間の長さを記録する配列
    vector<int> not_allowed(M + 2, 0);

    for (int i = 0; i < N; i++) {
        not_allowed[L[i]]++;
        not_allowed[R[i] + 1]--;
    }

    // 累積和で条件を満たさない範囲を計算
    for (int i = 1; i <= M; i++) {
        not_allowed[i] += not_allowed[i - 1];
    }

    long long count = 0;
    for (int l = 1; l <= M; l++) {
        int r = l;
        while (r <= M && not_allowed[r] == 0) {
            count++;
            r++;
        }
    }

    cout << count << endl;
    return 0;
}
