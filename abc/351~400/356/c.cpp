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
    int N, M, K;
    cin >> N >> M >> K;
    vector<int> C(M);
    vector<vector<int>> A(M);
    vector<string> R(M);
    for (int i = 0; i < M; i++) {
        int L;
        cin >> C[i];
        A[i].resize(C[i]);
        for (int j = 0; j < C[i]; j++) {
            cin >> A[i][j];
            // これ0indexスタートにする必要ある？
            A[i][j]--;
        }
        cin >> R[i];
    }

    int ans = 0;
    // 鍵を使うかどうか
    for (int mask = 0; mask < (1 << N); mask++) {
        bool ok = true;
        for (int i = 0; i < M; i++) {
            int cnt = 0;
            for (int a : A[i]) {
                // これ何？
                cnt += (mask >> a) & 1;
                int t = 3;
            }
            // これ何？
            // ok &= ((cnt >= K) && (R[i] == "o"));
            ok &= (cnt >= K) == (R[i] == "o");
        }
        ans += ok;
    }
    cout << ans << endl;
}