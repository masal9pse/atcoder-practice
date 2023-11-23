// 1時間くらい
#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <map>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    vector<pair<int, int>> ans(n);
    // vector<pair<int, vector<int>>> ans(n);
    rep(i, n)
    {
        ans[i].second = i + 1;
        int win_count = 0;
        rep(j, n)
        {
            if (s[i][j] == 'o')
            {
                win_count++;
                ans[i].first = win_count;
            }
        }
    }
    sort(ans.rbegin(),ans.rend());
    map<int,vector<int>> mp;
    rep(i,n) {
        mp[ans[i].first].push_back(ans[i].second);
    }
    // C++11以降ではautoと範囲ベースのforループを使用して逆順にイテレーションできます。
    for (auto it = mp.rbegin(); it != mp.rend(); ++it) {
        // it->first がキー、it->second が値です。
        // std::cout << "(" << it->first << endl;
        sort(mp[it->first].begin(),mp[it->first].end());
        for (auto v:mp[it->first])
        {
            cout << v << " ";
        }
    }
    cout << endl;
    return 0;
}