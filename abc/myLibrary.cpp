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

// ランレングス圧縮 
// 何回その文字列が登場した配列を出力する。
vector<P> rle(const string& s) {
    vector<P> res;
    for (char c:s)
    {
        if (res.size() > 0 && res.back().first == c) {
            res.back().second++;
        } else {
            res.emplace_back(c,1);
        }
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    return 0;
}