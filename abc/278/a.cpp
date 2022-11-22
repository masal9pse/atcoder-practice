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
    int n, k;
    cin >> n >> k;
    queue<int> q;
    rep(i, n)
    {
        int a;
        cin >> a;
        q.push(a);
    }
    rep(i, k)
    {
        q.pop();
        q.push(0);
    }
    rep(i, n)
    {
        int v = q.front();
        cout << v << ' ';
        q.pop();
    }
    cout << endl;
}

// int main()
// {
//     int n, k;
//     cin >> n >> k;
//     vector<int> a;
//     // vector<int> b(n);
//     // rep(i,n) cin >> a[i];
//     rep(i, n)
//     {
//         int b;
//         cin >> b;
//         a.push_back(b);
//     }
//     rep(i, k)
//     {
//         a.erase(cbegin(a));
//         a.push_back(0);
//     }
//     for(auto v: a) {
//         cout << v << endl;
//     }
//     return 0;
// }