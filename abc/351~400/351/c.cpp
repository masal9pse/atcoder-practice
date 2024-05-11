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

int main() {
    /*
      2^2+2^2 = 2^3
      2^5+2^5=2^6であることを利用する
    */
    int n;
    cin >> n;
    vector<int> ans;
    rep(i,n) {
        int a;
        cin >> a;
        ans.push_back(a);
        while (ans.size() >= 2)
        {
            int x = ans.back(),y = ans.end()[-2];
            if (x != y) break;
            ans.pop_back();
            ans.pop_back();
            ans.push_back(x+1);
        }
    }
    cout << ans.size() << endl;
    return 0;
}