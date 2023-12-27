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
using vi = vector<int>;
using vs = vector<string>;
using mi = map<int, int>;
# define ALL(x) (x).begin(), (x).end()
# define SZ(x) ((int)(x).size())
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> d(2);
    // 先頭の２つを足して奇数になった時のパターンがわからん。    
    rep(i,n) {
        int a;
        cin >> a;
        // どんな数字でもmod2するといい感じになる。
        d[a%2].push_back(a);
    }
    int ans = -1;
    rep(r,2) {
        auto& b = d[r];
        sort(b.rbegin(),b.rend());
        if (b.size() >= 2) {
            ans = max(ans,b[0]+b[1]);
        }
    }
    cout << ans << endl;
    return 0;
}