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

// ゲームのシミュレーションを行う関数
bool simulate_game(int N, vector<int>& A, int points_N) {
    for (int i = N - 2; i >= 0; --i) {
        if (A[i] >= 0) {
            points_N = max(points_N, A[i]);
        } else {
            points_N = (points_N - A[i] - 1) / 2;
        }
        if (points_N <= 0) return false; // 持ち点が0以下になったらfalseを返す
    }
    return true; // 全てのゲームをシミュレートし終わったらtrueを返す
}

int main() {
    int N;
    cin >> N;

    vector<int> A(N - 1);
    for (int i = 0; i < N - 1; ++i) {
        cin >> A[i];
    }

    // 全探索で人Nの持ち点を0からNまで試す
    for (int points_N = 0; points_N <= N; ++points_N) {
        if (simulate_game(N, A, points_N)) {
            cout << points_N << endl;
            return 0;
        }
    }

    return 0;
}
