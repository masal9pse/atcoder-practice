#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <limits>

using namespace std;



int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < m; ++i) cin >> b[i];
    
    sort(b.begin(), b.end());  // `b` をソートします
    
    int ans = numeric_limits<int>::max();  // 結果を保存するための変数。最大値で初期化。
    
    for (int i = 0; i < n; ++i) {
        int low = 0;
        int high = m - 1;
        int closest_diff = numeric_limits<int>::max();
        
        // 2分探索で最も近い要素を見つける
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int diff = abs(a[i] - b[mid]);
            closest_diff = min(closest_diff, diff);
            
            if (b[mid] < a[i]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        // 2分探索が終了した後、`low` または `high` の位置に近い値が存在する可能性があるので、最後にそれを確認
        if (low < m) {
            closest_diff = min(closest_diff, abs(a[i] - b[low]));
        }
        if (high >= 0) {
            closest_diff = min(closest_diff, abs(a[i] - b[high]));
        }
        
        ans = min(ans, closest_diff);  // 全体の最小の差を更新
    }
    
    cout << ans << endl;  // 結果を出力します
    
    return 0;
}
