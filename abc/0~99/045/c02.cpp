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
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i,j, n) for (int i = j; i < n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;
// 8方向
const vector<int> di = {-1, -1, 0, 0, 1, 1, 1, -1};
const vector<int> dj = {0, 1, -1, 1, -1, 0, 1, -1};

int main()
{
  string s;
  cin >> s;
  int n = s.size();
  // +を入れる場所をbit全探索で見る
  // +はmaxで|s|-1ある
  // ここまではok
  ll ans = 0;
  rep(bit,(1 << (n-1))) {
    ll sum = 0;
    // s[0]が3の場合、ASCIIコード上では10進数だと51で、0はcharだと10進数で48を示す
    // よって51 - 48で3になる

    // 先頭の値は+で変化しないのでここで定義
    ll f = s[0] - '0';
    rep(i,n-1) {
      if (bit & (1 << i)) {
        sum += f;
        // ここから下よくわかってない
        f = 0;
      }
      f = f * 10 + (s[i+1] - '0');
    }
    sum += f;
    ans += sum;
  }
  cout << ans << endl;
  // 解説見た
  // sを分割して総和を取る処理のコードの落とし込みができなかった。
  // point1 数値に直せるcharを元に戻す場合は-'0'すればいい。これ結構応用できそう
  return 0;
}