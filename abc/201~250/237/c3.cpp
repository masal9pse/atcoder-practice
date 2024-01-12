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
// using P = pair<int, int>;
template <class T>
using P = pair<T, T>;
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;
// 4方向
// int di[4] = {1, 0, -1, 0};
// int dj[4] = {0, 1, 0, -1};

// 8方向
const vector<int> di = {-1, -1, 0, 0, 1, 1, 1, -1};
const vector<int> dj = {0, 1, -1, 1, -1, 0, 1, -1};

bool is_reverse(string s)
{
  string t = s;
  reverse(t.begin(), t.end());
  return t == s;
}

int main()
{
  /*
    全て目安20m　ただ手が動くうちはエンドレスでやる。これによってコンテスト本番の粘りACや思考力のupにつながる
    問題文の理解 read
    実装方針決め plan
      末尾がaの時
        末尾aの数だけaを追加して、回文判定
      末尾がaでない時
        現在の文字列で回文判定でyes or no
    実装 do
    ３つのパートに分け、それぞれに時間制限を設けることで以下のメリットがある
     - すぐに解説を見てしまう癖を防止できる
     - １問に何時間も粘りすぎてしまう問題を防止できる

    解説記事見た article
      理解すること＋どうやったらその問題を初見で解けるか考える
      先頭にaがある場合を忘れていた
      その場合、末尾aの個数-先頭aの個数となる
    解説動画見た video
  */
  string s;
  cin >> s;
  int count = 0;
  int n = s.size();
  for (int i = n - 1; i >= 0; i--)
  {
    if (s[i] != 'a')
      break;
    else
      count++;
  }
  if (!count)
  {
    if (is_reverse(s))
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
    return 0;
  }
  string ans;
  rep(i, count)
  {
    ans += 'a';
  }
  ans += s;
  if (is_reverse(ans))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}