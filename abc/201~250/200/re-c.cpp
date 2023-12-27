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

// 隣り合う要素を引き算する。
vector<int> getNextSubList(vector<int> a, int n)
{
    vector<int> b;
    rep(i, n + 1)
    {
        if (i != n + 1)
        {
            int sub = a[i + 1] - a[i];
            b.push_back(sub);
        }
    }
    return b;
}

int main()
{
    int n;    
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int count = 0;
    vector<int> calcs = getNextSubList(a,n);

    return 0;
}