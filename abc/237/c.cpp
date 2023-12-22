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
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

bool is_palindrome(string s)
{
  int n = s.size();
  string palindrome = "";
  for (int i = n-1; i >= 0; i--)
  {
    palindrome += s[i];
  }
  return s == palindrome;
}

int main()
{
  /*
    問題文の理解 m done
      実装時にミスが生じないためにも、ここは怠らず行う。
      脳死コピペだと実装のバグ修正で詰む
    実装方針決め m
      生成AIを参考にするのはあり
      まずは普通に回文になるかを判定する。
        回文になったら、Yes
        ならなかったら
          末尾にaが何個あるかを見る
            なかったら、No
          あったら、その分先頭にaを追加する。
          再度回文があるかどうかを判定する。
            あったら、yesなければno
    実装 m
      生成AIに頼ると、細かいテストケースで落ちることが多々ある
  　　解説見る
        実装方針に間違いがないかチェック
  */
  string s;
  cin >> s;
  bool is_kaibun = is_palindrome(s);
  if (is_kaibun) {
    cout << "Yes" << endl;
    return 0;
  }
  int count = 0;
  for (int i = s.size()-1; i >= 0; i--)
  {
    if (s[i] == 'a') count++;
    else break;
  }
  string kaibun = "";
  rep(i,count) kaibun += 'a';
  kaibun += s;
  bool is_kaibun2 = is_palindrome(kaibun);
  if (is_kaibun2) {
    cout << "Yes" << endl;
  } else cout << "No" << endl;
  return 0;
}