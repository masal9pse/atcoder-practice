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
    int n,m;
    cin >> n >> m;
    vector<vector<int>> to(n+1);
    rep2(i,m) {
        int a,b;
        cin >> a >> b;
        to[a].push_back(b);
        to[b].push_back(a);
    }
    rep2(i,n) {
        cout << to[i].size() << ' ';
        sort(to[i].begin(),to[i].end());
        // for(int v: to[i]) cout << v << ' ';
        rep(j,to[i].size()) cout << to[i][j] << ' ';
        cout << endl;
    }
    return 0;
}