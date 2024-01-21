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
using namespace std;
using ll = long long;
// using P = pair<int, int>;
template<class T> using P = pair<T, T>;
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

int main()
{
  /*
  問題回答中
    全て目安20m　ただ手が動くうちはエンドレスでやる。これによってコンテスト本番の粘りACや思考力のupにつながる
    問題文の理解 read
    実装方針決め plan
       空文字列は拡張 A 文字列でも拡張 B 文字列でも拡張 C 文字列でもあることに注意してください。
    実装 do
    ３つのパートに分け、それぞれに時間制限を設けることで以下のメリットがある
     - すぐに解説を見てしまう癖を防止できる
     - １問に何時間も粘りすぎてしまう問題を防止できる
    コーナーケース　細かいコーナーケースをここに記載
    関連キーワード　使用アルゴリズムか考え方等を記載して、コンテスト本番で検索できるようにする
      ex: 全探索
    意識すること
      計算量を考えない問題でも計算量を少なくなるよう考察を進める、
      これによって今の自分に欠如している論理的思考や数学的な考え方が身に付くはず

  復習
    解説記事見たメモ article
      理解すること＋どうやったらその問題を初見で解けるか考える
    解説動画見たメモ video
    コーナーケース　細かいコーナーケースをここに記載
    関連キーワード　使用アルゴリズムか考え方等を記載して、コンテスト本番で検索できるようにする
      ex: 全探索
  */
  string s;
  cin >> s;
  // １つ前の文字と比較して、文字が異なっていたらそれをansについか
  string ans;
  // vector<bool> k = {false,false,false};
  ans += s[0];
  rep(i,s.size()) {
    // if (s[i] == '') continue;
    if (i == 0) continue;
    if (s[i] == s[i-1]) continue;
    else ans += s[i];
  }

  // if (ans == "ABC" || ans == "A" || ans == "B" || ans == "C" || ans == "") cout << "Yes" << endl;
  if (ans == "ABC" || ans == "A" || ans == "B" || ans == "C" || ans == "BC" || ans == "" || ans == "AC" || ans == " ") cout << "Yes" << endl;
  else {
    // while (ans != "")
    // {
    //   int t = ans.find("ABC");
    //   if (t == string::npos) {
    //      cout << "No" << endl;
    //      return 0;
    //   }
    //   ans.erase(t,3);
    //   int tt = 3;
    // }
    // if (ans == "") cout << "Yes" << endl;
    cout << "No" << endl;
  }
  // else cout << "No" << endl;
  return 0;
  // AAABBBCCCCCCCAAABBBCCCCCCCAAABBBCCCCCCC
  // ABC
  //  ABCABC
}