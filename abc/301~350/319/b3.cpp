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
      そのまま実装
    実装 do 30+m
      生成AIに頼ると、細かいテストケースで落ちることが多々ある
  */
  int n;
  cin >> n;
  string s;
  rep3(i, n)
  {
    vector<int> d;
    rep2(qi, 9)
    {
      // ここをミスってた
      // iの約数ではなく、nの約数を見つける
      if (n % qi == 0)
        d.push_back(qi);
    }
    vector<int> ans;
    for (auto j : d)
    {
      // i が n/j の倍数であるもの
      // 分からなかったので、i が n/j の倍数であるものの判定方法を学ぶ
      if (i == 0)
      {
        ans.push_back(j);
        continue;
      }
      // if ((n / j) % i == 0)
      if (i % (n / j) == 0)
        ans.push_back(j);
    }    
    if (ans.size() == 0)
      s += '-';
    else
    {
      int output = *min_element(ans.begin(), ans.end());
      s += to_string(output);
    }
  }
  cout << s << endl;
  return 0;
}