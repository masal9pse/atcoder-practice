// 少し解説動画見た
#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <map>
#include <string>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n, m;
    cin >> n >> m;
    string s,t;
    cin >> s;
    cin >> t;
    int ans = -1;
    bool is_first = true;
    rep(i,n) {
        if (s.at(i) != t.at(i)) is_first = false;
    }
    bool is_last = true;
    reverse(s.begin(),s.end());
    reverse(t.begin(),t.end());
    rep(i,n) {
        if (s.at(i) != t.at(i)) is_last = false;
    }    
    if (is_first && is_last) cout << 0 << endl;
    if (is_first && !is_last) cout << 1 << endl;
    if (!is_first && is_last) cout << 2 << endl;
    if (!is_first && !is_last) cout << 3 << endl;
    return 0;
}