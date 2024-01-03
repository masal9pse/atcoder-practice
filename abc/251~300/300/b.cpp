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
using namespace std;
using ll = long long;
using P = pair<int, int>;
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

int main() {
  int H, W;
  cin >> H >> W;
  vector<string> A(H), B(H);
  for (auto& x : A) cin >> x;
  for (auto& x : B) cin >> x;
  for (int s = 0; s < H; s++) {
    for (int t = 0; t < W; t++) {
      int ok = 1;
      for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
          if (A[(i - s + H) % H][(j - t + W) % W] != B[i][j]) ok = 0;
        }
      }
      if (ok) {
        cout << "Yes" << endl;
        exit(0);
      }
    }
  }
  cout << "No" << endl;
}