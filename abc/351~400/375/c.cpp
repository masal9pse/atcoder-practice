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
const int MI = 1e8;
const ll MLL = 1e18;

int main() {
    int N;
    std::cin >> N;

    std::vector<std::string> grid(N);
    
    // グリッドの入力
    for (int i = 0; i < N; ++i) {
        std::cin >> grid[i];
    }

    // 新しいグリッドを初期化
    std::vector<std::string> newGrid(N, std::string(N, '.'));

    // 色の置き換え
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            newGrid[j][N - 1 - i] = grid[i][j];
        }
    }
    cout << "\n" << endl;
    // 新しいグリッドの出力
    for (const auto& row : newGrid) {
        std::cout << row << std::endl;
    }

    return 0;
}
