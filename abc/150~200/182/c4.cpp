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

int main()
{
    string n;
    cin >> n;
    int size = n.size();
    int ans = 19;
    // sizeが3の時 1 << 3 = 1000 = 8, 0(000)からつまり7(111)までループを回す
    rep(bit, (1 << size))
    {
        string sum = "";
        int cnt = 0;
        rep(i, size)
        {
            if (bit & (1 << i)) cnt++;
            else sum += n[i]; 
        }
        if (sum.empty()) continue;
        if (stoll(sum) % 3 == 0) ans = min(ans,cnt);
    }
    if (ans == 19) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}