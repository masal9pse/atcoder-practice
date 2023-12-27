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
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int n,m;
void output(vi a) {
    rep(i,n) {
        printf("%d%c",a[i],i== n-1?'\n':' ');
    }
}

void f(vi a) {
    if (a.size() == n) {
        output(a);
        return;
    }
    int sx = 1;
    if (a.size() > 0) {
        sx = a.back()+1;
    }
    a.push_back(sx);
    while (a.back() <= m)
    {
        // ここがどういう流れの処理になっているのかを理解したい。
        f(a);
        a.back()++;
    }
    
}

int main() {
    cin >> n >> m;
    f({});
    return 0;
}

// int n, m;
// void output(vi a)
// {
//     rep(i, n)
//     {
//         printf("%d%c", a[i], i == n - 1 ? '\n' : ' ');
//     }
// }

// void f(vector<int> a)
// {
//     if (a.size() == n)
//     {
//         output(a);
//         return;
//     }
//     int sx = 1;
//     if (a.size() > 0)
//     {
//         sx = a.back() + 1;
//         int k = 3;
//     }
//     a.push_back(sx);
//     int laa = a.back();
//     while (a.back() <= m)
//     {
//         f(a);
//         a.back()++;
//     }
// }

// int main()
// {
//     cin >> n >> m;
//     f({});
//     vi k = {1,3,5,6,7};
//     int kk = k.back()++;
//     return 0;
// }

// int n, m;
// void output(vector<int> a) {
//  rep(i,n) {
//     printf("%d%c",a[i],i== n-1?'\n': ' ');
//  }
// }

// // 再帰で前探索することをdfsという。
// void f(vector<int> a) {
//     if (a.size() == n) {
//         output(a);
//         return;
//     }
//     int sx = 1;
//     if (a.size() > 0) {
//         sx = a.back()+1;
//     }
//     a.push_back(sx);
//     while (a.back() <= m) {
//         f(a);
//         a.back()++;
//     }
// }

// int main()
// {
//     cin >> n >> m;
//     f({});
//     return 0;
// }