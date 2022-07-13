#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
#include <map>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)

vector<int> getNextSumList(vector<int>, int);

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
    vector<int> b(n);
    vector<int> c(n);
    rep(i, n) cin >> a[i];
    int sum = 0;
    b = getNextSumList(a, n);
    sort(b.begin(), b.end());
    c = getNextSubList(b, n);
    int ans = 0;
    rep(i,c.size()) {
        ans = max(ans,c[i]);
    }
    cout << ans << endl;
    return 0;
}

// ランレングス圧縮
vector<P> rle(const string &s)
{
    vector<P> res;
    for (char c : s)
    {
        if (res.size() > 0 && res.back().first == c)
        {
            res.back().second++;
        }
        else
        {
            res.emplace_back(c, 1);
        }
    }
    return res;
}

vector<int> getNextSumList(vector<int> a, int n)
{
    int sum = 0;
    vector<int> b(n + 2);
    rep2(i, n)
    {
        sum += a[i - 1];
        b[i] += sum % 360;
    }
    b[n + 1] = 360;
    return b;
}