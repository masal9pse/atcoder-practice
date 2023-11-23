// 2時間かかった
// テストケースを変更したいときはpaiza.ioで
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
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> a_list(n);
    rep(i, n)
    {
        int c;
        cin >> c;
        rep(j, c)
        {
            int a;
            cin >> a;
            a_list[i].push_back(a);
        }
    }
    int x;
    cin >> x;
    int count = 0;
    int find_ball = 10e8;
    vector<int> ans;
    rep(i, n)
    {
        int size = a_list[i].size();
        if (size <= find_ball)
        {
            rep(j, size)
            {
                if (v == x) 
            }
        }
        if (a_list[i].size() <= find_ball)
        {
            for (auto v : a_list[i])
            {
                if (v == x)
                {
                    if (a_list[i].size() < find_ball)
                    {
                        count = 0;
                        ans.clear();
                    }
                    count++;
                    ans.push_back(i + 1);
                    find_ball = a_list[i].size();
                    break;
                }
            }
        }
    }
    cout << count << endl;
    if (count >= 1)
    {
        for (auto v : ans)
        {
            cout << v << " ";
        }
        cout << endl;
    }
    return 0;
}