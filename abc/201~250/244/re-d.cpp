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

int f(string s) {
    if (s == "RGB") return 0;
    if (s == "GRB") return 0;
    if (s == "BGR") return 0;
    return 1;
}

int main()
{
    string s,t;
    cin >> s >> t;
    if (f(s) == f(t)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}