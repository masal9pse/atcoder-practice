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

int main() {
    vector<string> list;
    while (1)
    {
      string s;
      cin >> s;
      list.push_back(s);
      // どこまで文字列を取得すればいいのかをルール化できていない。
      if (s == "Metamorphosis.") break;
    }
    int ans = 0;
    for(string s : list) {
      if (isupper(s[0]) || isdigit(s[0])) ans++;
    }
    cout << ans << endl;
    return 0;
}