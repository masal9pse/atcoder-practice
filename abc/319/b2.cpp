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

vector<int> divisors(int n,int k)
{
  vector<int> divisors;
  if (n == 0)
  {
    for (int i = 1; i <= n; i++)
    {
      if (i >= 1 && i <= 9)
      {
        divisors.push_back(i);
      }
    }
    return divisors;
  }

  for (int i = 1; i <= n; i++)
  {
    if (n % i == 0 && i >= 1 && i <= 9)
    {
      divisors.push_back(i);
    }
  }

  return divisors;
}

int main()
{
  /*
    問題文の理解 m

    実装方針決め m
      生成AIを参考にするのはあり
    実装 m
      生成AIに頼ると、細かいテストケースで落ちることが多々ある
  */
  int n;
  cin >> n;
  for (int i = 0; i <= n; i++)
  {
    vector<int> d = divisors(n,i);
    int d3= 3;
  }

  return 0;
}