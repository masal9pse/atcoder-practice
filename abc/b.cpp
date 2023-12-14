#include <iostream>

using namespace std;

int main() {
  // 入力
  int K, G, M;
  cin >> K >> G >> M;

  // グラスの水の量
  int g = 0;

  // マグカップの水の量
  int m = 0;

  // 操作を K 回繰り返す
  for (int i = 0; i < K; i++) {
    // グラスが水で満たされている場合
    if (g == G) {
      g = 0;
    }
    // マグカップが空の場合
    else if (m == 0) {
      m = M;
    }
    // その他の場合
    else {
      // マグカップからグラスに水を移す
      int n = min(M, G - g);
      g += n;
      m -= n;
    }
  }

  // 出力
  cout << g << " " << m << endl;

  return 0;
}
