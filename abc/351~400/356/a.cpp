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

int main()
{  
  int N, L, R;
  cin >> N >> L >> R;
  
  vector<int> A(N);
  for(int i = 0; i < N; ++i) {
      A[i] = i + 1; // 数列Aを1からNまで初期化
  }
  reverse(A.begin() + L - 1, A.begin() + R);

  for(const auto& num : A) {
    cout << num << " ";
  }
  cout << endl;
  return 0;
}