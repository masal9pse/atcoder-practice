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
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;
// 8方向
const vector<int> di = {-1, -1, 0, 0, 1, 1, 1, -1};
const vector<int> dj = {0, 1, -1, 1, -1, 0, 1, -1};

int main()
{
  int n, k;
  cin >> n >> k;
  vector<char> d(k);
  vector<bool> f(10, true);
  rep(i, k)
  {
    cin >> d[i];
    f[d[i] - '0'] = false;
  }
  string ans;
  string s = to_string(n);
  rep(i, s.size()) rep(j, 10)
  {
    // 先頭が0のケースが考慮できてないかも    
    if (s[i] == j + '0')
    {
      if (f[j]) {
        ans += j + '0';
        break;
      }
      // d[i]がfalseの場合、次のtrueのd[j]をansに加算したい。
      else
      {
        for (int k = j + 1; k < 10; k++)
        {
          if (f[k])
          {
            ans += k + '0';
            break;
          }
        }
        break;        
      }
    }
  }
  cout << ans << endl;
  return 0;
}
