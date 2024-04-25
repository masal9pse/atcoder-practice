#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
#include <map>
#include <cassert>
#include <stack>
#include <queue>
#include <deque>
#include <numeric>
using namespace std;
using ll = long long;
template<class T> using P = pair<T, T>;
template<typename T> bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i,j, n) for (int i = j; i < n; i++)
#define all(x) (x).begin(), (x).end()
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

vector<P<int>> ans;
// 配列の要素を交換する関数
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// パーティション関数
int partition(vector<int>& arr, int low, int high) {
    // ピボットを選択
    int pivot = arr[high];
    // ピボットより小さい要素のインデックス
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        // 要素がピボットより小さい場合、iをインクリメントして要素を交換
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
            ans.emplace_back(i,j);
        }
    }
    // ピボットを正しい位置に移動
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// クイックソートの実装
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        // パーティションを行い、ピボットの位置を取得
        int pi = partition(arr, low, high);

        // ピボットより小さい要素の部分配列を再帰的にソート
        quickSort(arr, low, pi - 1);
        // ピボットより大きい要素の部分配列を再帰的にソート
        quickSort(arr, pi + 1, high);
    }
}

// 配列の要素を表示する関数
void printArray(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // テスト用の配列
    // vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n;
    cin >> n;
    vector<int> arr(n);
    rep(i,n) cin >> arr[i];
    cout << "ソート前の配列: ";
    printArray(arr);

    // クイックソートを呼び出し
    quickSort(arr, 0, n - 1);

    cout << "ソート後の配列: ";
    printArray(arr);

    return 0;
}
