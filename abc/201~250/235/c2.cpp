#include <map>
#include <math.h>
#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n,q;
    cin >> n >> q;
    map<int,vector<int>> mt;
    rep(i,n) {
        int a;
        cin >> a;
        mt[a].push_back(i);
    }
    rep(i,q) {
        int x,k;
        cin >> x >> k;
        
        // 存在しない値のテストをしたいが、配列外参照のみで提出してみる
        // mapのkeyにxが入るが、valueには何も入らないので、sizeは0になりsize < kが成立し-1が出力される。

        // 配列外参照のチェック
        int size = mt[x].size();
        if (size < k) cout << -1 << endl;
        else cout << mt[x][k-1] + 1 << endl;
        int d = 34;
    }
    return 0;
}