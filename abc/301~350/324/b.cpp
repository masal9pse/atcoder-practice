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
#define rrep(i,j, n) for (int i = j; i < n; i++)
#define all(x) (x).begin(), (x).end()
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

int main()
{ 
  /*
   x,yを全探索、範囲はxが60,yが30くらいのはずだがそれだとx,yが存在しなかった場合に10^19のllを超えてしまう。
   これで解消　https://atcoder.jp/contests/abc324/submissions/47949804
   
   素因数分解(Nを素数の掛け算に分解)を行う。O(60*30)なのでwhile文で問題なし
   
   メモ 角桁の足し算が3の倍数なら、その数は3の倍数
  */ 
  ll n;
  cin >> n;
  while (n%2 == 0) n/=2;
  while (n%3 == 0) n/=3;
  if (n==1) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}