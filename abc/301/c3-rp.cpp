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

vector<int> count(string a)
{
  vector<int> cnt(27);
  for (char c : a)
  {
    if (c == '@')
      cnt[26]++;
    else
      cnt[c - 'a']++;
  }
  return cnt;
}

int main()
{
  /*
    途中で別の問題にいく場合は、終わったものファイルにrpdのいずれかをつける。
    問題文の理解 r 13m
      実装時にミスが生じないためにも、ここは怠らず行う。
      脳死コピペだと実装のバグ修正で詰む
    実装方針決め p 15m
      1.
        @の判定
          atcoderをリストに入れて判定
        並び替えの判定
          mapを使って、使用文字の個数を調べる。
          下記2点が同じであれば行けそうやな
            - s,tのatcoderの+ @の合計文字数が同じあること
            - その他の文字数が同じであること
        atcoder以外個数が異なればNoを出力
    実装 d
      - atcoder以外個数が異なればNoを出力
      - atcoderの個数が異なる場合
          同じ個数になるまで、個数の足りない分@を与える。
          もう一度、個数の判定を行って個数が異なればNoを出力
      上記ループを最後まで辿れたらYesを出力
    解説見る
      - 考察と同じか　近い
      - データ構造はvector、mapどっちか。mapだと2つのmapの比較をするとO(n^2)になるので無理そう。
      - 実装を見たい
  */
  string s, t;
  cin >> s;
  cin >> t;
  vector<int> sv = count(s);
  vector<int> st = count(t);
  string A = "atcoder";
  vector<bool> isA(26);
  for (auto c : A)
    isA[c - 'a'] = true;
  rep(i, 26)
  {
    if (!isA[i])
    {
      if (sv[i] != st[i])
      {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  //
  rep(i, 26)
  {
    if (isA[i])
    {
      if (sv[i] < st[i])
      {
        sv[26] -= st[i] - sv[i];
      }
      else
      {
        st[26] -= sv[i] - st[i];
      }
    }
  }
  
  if (sv[26] < 0)
  {
    cout << "No" << endl;
    return 0;
  }
  if (st[26] < 0)
  {
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
  return 0;
}