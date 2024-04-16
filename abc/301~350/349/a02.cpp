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

using namespace std;

int main() {
    int n;
    cin >> n;
    // シミュレーション？
    // 人1が2~4と対戦するケースがあるが実装できない。
    // いやO(N^2)ならいける？ => きつい、人1がずっと対戦してしまうので、1,2が戦ってつぎ2,3が戦うことができない。
    int sum = 0;
    rep(i,n-1) {
        int a;
        cin >> a;
        sum+=a;
    }
    sum*=-1;
    cout << sum << endl;
    return 0;
}
