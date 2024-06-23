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

int main() {
    // 高橋君の身長を入力
    int H;
    // cout << "高橋君の身長を入力してください(cm): ";
    cin >> H;
    
    // 日数を計算
    int days = 0;
    long long height = 0;
    
    while (height <= H) {
        height += pow(2, days);
        days++;
    }
    
    // 結果を出力
    // cout << "植物の高さが高橋君の身長を超えるのは発芽から " << days << " 日目の朝です。" << endl;
    cout << days << endl;
    
    return 0;
}
