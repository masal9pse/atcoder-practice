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

// 座標圧縮を行う関数
vector<int> compress_coordinates(const vector<int>& coordinates) {
    // 座標のコピーを作成してソートする
    vector<int> sorted_coords = coordinates;
    sort(sorted_coords.begin(), sorted_coords.end());
    
    // 重複を削除する
    auto last = unique(sorted_coords.begin(), sorted_coords.end());
    sorted_coords.erase(last, sorted_coords.end());

    // 座標圧縮のマップを作成
    unordered_map<int, int> coord_map;
    for (int i = 0; i < sorted_coords.size(); ++i) {
        coord_map[sorted_coords[i]] = i;
    }

    // 圧縮後の座標リストを作成
    vector<int> compressed;
    compressed.reserve(coordinates.size());
    for (int coord : coordinates) {
        compressed.push_back(coord_map[coord]);
    }

    return compressed;
}

int main()
{
  string s,t;
  cin >> s >> t;
  vector<string> ans = {};
  int n = s.size();
  string cs = s;
  rep(i,n) {
    if (cs[i] == t[i]) continue;    
    cs[i] = t[i];
    ans.push_back(cs); 
  }
  cout << ans.size() << endl;
  do {
      for(string t:ans) cout << t << endl;
    } while (next_permutation(ans.begin(),ans.end()));
  return 0;
}