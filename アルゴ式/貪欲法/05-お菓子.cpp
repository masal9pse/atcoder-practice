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

int main()
{
  /*
    問題文の理解 read m
      実装時にミスが生じないためにも、ここは怠らず行う。
      脳死コピペだと実装のバグ修正で詰む
    実装方針決め plan m
      生成AIを参考にするのはあり
    実装 do m
      生成AIに頼ると、細かいテストケースで落ちることが多々ある
  */
  int n;
  cin >> n;
  int ans = 0;
  while (n)
  {
    if (n % 3 == 0)
      n /= 3;
    else
      n--;
    ans++;
  }
  cout << ans << endl;
  return 0;
}