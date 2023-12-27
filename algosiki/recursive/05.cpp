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

int func(int x, vector<int>& fib) {
  if (fib[x] != -1) return fib[x];
  int calc = func(x-1,fib) + func(x-2,fib);
  fib[x] = calc;
  return fib[x];
}

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
    vector<int> fib(n+1,-1);
    fib[0] = 0;
    fib[1] = 1;
    int ans = func(n,fib);
    cout << ans << endl;
    return 0;
}