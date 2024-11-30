#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> b(n, -1); // 結果を格納する配列
    unordered_map<int, int> last_position; // 直前の出現位置を記録するマップ

    for (int i = 0; i < n; i++) {
        int value = a[i];

        // 直前に出現した位置があれば、それを B[i] に記録
        if (last_position.find(value) != last_position.end()) {
            b[i] = last_position[value];
        }

        // 現在の位置をマップに更新
        last_position[value] = i + 1; // 1-indexed で位置を保存
    }

    // 結果の出力
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}
