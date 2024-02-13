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
template <class T>
using P = pair<T, T>;
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i, j, n) for (int i = j; i < n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

int main()
{
  // 実装に悩む場合、20分考えて無理なら答え見る
  int n;
  cin >> n;
  vector<int> ng(3);
  rep(i, 3) cin >> ng[i];
  int ans = n;
  rep(i, 100)
  {
    // 1を2回連続で引き算したいけどこのコードじゃ1,2,3を順に引く感じなっている
    rrep(j, 1, 4)
    {
      ans -= j;
      if (ans == 0)
      {
        cout << "YES" << endl;
        return 0;
      }
      rep(k, 3)
      {
        if (ans == ng[k]) break;
      }
    }
  }
  cout << "NO" << endl;
  // 解説見た
  // 1,2,3それぞれ100通りあるから1^100*3 3^100になる => オーバーフローするくらいでかい
  // O(3)でいけると思ってた俺終わってるわwww
  // 貪欲法にする
  return 0;
}