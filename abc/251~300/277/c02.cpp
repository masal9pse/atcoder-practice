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
    int n;
    cin >> n;
    map<int, vector<int>> to;
    rep(i, n)
    {
        int a, b;
        cin >> a >> b;
        to[a].push_back(b);
        to[b].push_back(a);
    }

    set<int> reach;
    queue<int> q;
    q.push(1);
    reach.insert(1);
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int u : to[v])
        {
            if (reach.count(u)) continue;

            reach.insert(u);
            q.push(u);
        }
    }
    cout << (*reach.rbegin()) << endl;
}

// int main()
// {
//     int n;
//     cin >> n;
//     map<int, vector<int>> to;
//     rep(i, n)
//     {
//         int a, b;
//         cin >> a >> b;
//         to[a].push_back(b);
//         to[b].push_back(a);
//     }

//     set<int> reach;
//     queue<int> q;
//     q.push(1);
//     reach.insert(1);
//     while (!q.empty())
//     {
//         int v = q.front();
//         q.pop();
//         for (int u : to[v])
//         {
//             if (reach.count(u))
//                 continue;

//             reach.insert(u);
//             q.push(u);
//         }
//     }
//     cout << (*reach.rbegin()) << endl;
//     return 0;
// }