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
// using P = pair<int, int>;
using P = pair<string, int>;
#define rep(i, n) for (int i = 0; i < n; i++)

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

int main()
{
    ll n;
    cin >> n;
    string ans = "A";
    ll counter = 1;
    // vector<P> ans_list = {};
    // if (n == 1) ans += "A";
    // if (n == 1) ans_list[];
    bool kisu_flag = false;
    if (n % 2 != 0)
        kisu_flag = true;
    if (kisu_flag)
    {
        if (counter < n)
        {
            counter *= 2;
            ans += 
            int k = 0;
        }
    }    
    return 0;
}