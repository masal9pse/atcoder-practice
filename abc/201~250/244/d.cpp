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

string input() {
    string res;
    rep(i,3) {
        char c;
        cin >> c;
        if (c == 'R') res += '0';
        if (c == 'G') res += '1';
        if (c == 'B') res += '2';
    }
    return res;
}

int color (string s) {
    if (s == "012") return 0;
    if (s == "201") return 0;
    if (s == "120") return 0;
    return 1;
}

int main()
{
    string s = input();
    string t = input();
    if (color(s) == color(t)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}