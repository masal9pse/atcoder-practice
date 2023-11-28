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
    int n,m;
    cin >> n >> m;
    vector<bool> d(n);
    rep(i,m) {
        int a;
        cin >> a;
        a--;
        d[a] = true;
    }

    vector<int> re_list;
    rep(i,n) {
        if (d[i]) {
            re_list.push_back(i);
        } else {
            cout << i + 1 << " ";
            for (int j = re_list.size()-1; j >= 0; j--)
            {
                cout << re_list[j] + 1 << " ";
            }
            re_list.clear();
            int dddd = 33;
        }
    }
    cout << endl;
    return 0;
}