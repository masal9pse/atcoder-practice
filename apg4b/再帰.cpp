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
template<class T> using P = pair<T, T>;
template<typename T> bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i,j, n) for (int i = j; i < n; i++)
#define all(x) (x).begin(), (x).end()
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

int array_sum_from_i(vector<int> &data,int i) {
    if (i == data.size()) return 0;
    int s = array_sum_from_i(data,i+1); 
    return data[i] + s;
}

int array_sum(vector<int> &data) {
  return array_sum_from_i(data, 0);
}


int main()
{
  vector<int> data = {3,5,7};
  int ans = array_sum(data);
  cout << ans << endl;
  return 0;
}