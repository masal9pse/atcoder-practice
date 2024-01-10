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
#include <queue>
using namespace std;
using ll = long long;
using P = pair<int, int>;
using vi = vector<int>;
using vs = vector<string>;
using mi = map<int, int>;
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> to(n);
    rep(i, m)
    {
        int a, b;
        cin >> a >> b;
        to[a].push_back(b);
        to[b].push_back(a);
    }
    int max_index = -1;
    int student = -1;
    rep(i, n)
    {
        int size = to[i].size();
        if (max_index < size)
        {
            max_index = size;
            student = i;
        }
    }
    sort(to[student].begin(), to[student].end());
    for (auto v : to[student])
    {
        cout << v << ' ';
    }
    cout << endl;
    return 0;
}