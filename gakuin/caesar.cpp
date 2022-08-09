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

void q_1(string s, int n)
{
    int size = s.size();
    vector<char> c(size);
    // vector<string> ans;
    rep(i, size) c[i] = s[i];
    for (int i = 1; i <= n; i++)
    {
        string ans;
        rep(j, size)
        {
            ans += c[j] - i;
        }
        cout << ans << endl;
    }
}

int main()
{
    // whatmonthが一番それっぽいので、回答は7月
    q_1("yjcvoqpvj", 4);
    // q_2({"ooni", "eshh", "gtaa", "hesg"}, 4);
    return 0;
}

void q_2(vector<string> s_list, int n)
{
    rep(i, 4)
    {
        string ans;
        rep(j, n)
        {
            ans += s_list[j];
        }
        cout << ans << endl;
    }
}