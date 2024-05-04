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
#define all(x) (x).begin(), (x).end()
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

// 

int main()
{  
  int n;
  cin >> n;
  int t = n % 10;
  n/=10;
  while (n)
  {
    if (t >= (n%10)) {
      cout << "No" << endl;
      return 0;
    }
    t = n % 10;
    n /= 10;
  }
  cout << "Yes" << endl;
  return 0;
}