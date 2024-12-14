#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;  // N人、M個の寿司
    
    vector<int> A(N);  // 各人の美食度
    vector<int> B(M);  // 寿司の美味しさ
    
    // 各人の美食度を入力
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    // 寿司の美味しさを入力
    for (int i = 0; i < M; ++i) {
        cin >> B[i];
    }
    
    int current_person = 0;  // 寿司を取るべき次の人を示すインデックス
    
    // 寿司の美味しさについて処理
    for (int j = 0; j < M; ++j) {
        // 寿司 B[j] が流れてくるときに、誰が取るかを決める
        while (current_person < N && A[current_person] < B[j]) {
            // 美食度が足りない人はスキップ
            current_person++;
        }
        
        if (current_person < N) {  // 寿司を取る人が見つかった場合
            cout << current_person + 1 << endl;  // 1-based indexで出力
            current_person++;  // その人が寿司を取ったので次の人へ
        } else {
            cout << -1 << endl;  // 誰も取らない場合
        }
    }
    
    return 0;
}
