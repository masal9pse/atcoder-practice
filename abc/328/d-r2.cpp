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
    実装方針決め plan m
      普通にABCがなくなるまでループ回したら行けるくない？
      マックスの計算量はSの長さ10^5程度なので
      いやTLEになった

      削除する処理はvectorだとO(N)
      　特に削除した後、残った文字を削除前の文字の場所に詰める処理に時間がかかる
    解説見た
      空文字に対して文字を追加していく。
      追加していき、ABCになったら先頭から削除するようにすれば
      O(1)で削除できる。
      スタックを使用すれば上記の要件を達成できる。
      よって計算量は文字の数O(N)と削除O(1)を足してO(N+N) => O(N)となる

    実装 do m
      stackを使わずに、新しい文字列を追加してそれをpop_backしていた。
  */
  string s;
  cin >> s;  
  int n = s.size();
  string ans;
  rep(i, n)
  {
    ans += s[i];
    // 文字列削除はスタックの考えで！
    if (ans.size() >= 3 && ans.substr(ans.size()-3) == "ABC") {
      ans.pop_back();
      ans.pop_back();
      ans.pop_back();
    }
  }
  cout << ans << endl;
  return 0;
}