#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solve(int N, int K, vector<int> A, vector<int> B) {
  // 薬の種類iの服用量の合計
  vector<int> C(N);
  for (int i = 0; i < N; i++) {
    C[i] = A[i] * B[i];
  }

  // 薬の種類iの服用量の合計がK以下になる日数
  vector<int> D(N);
  for (int i = 0; i < N; i++) {
    if (C[i] <= K) {
      D[i] = 1;
    } else {
      D[i] = (C[i] - K) / B[i] + 1;
    }
  }

  // 最小の日数
  int ans = *min_element(D.begin(), D.end());
  return ans;
}

int main() {
  int N, K;
  vector<int> A, B;

  cin >> N >> K;
  for (int i = 0; i < N; i++) {
    cin >> A[i] >> B[i];
  }

  int ans = solve(N, K, A, B);
  cout << ans << endl;

  return 0;
}