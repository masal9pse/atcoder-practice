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

int main()
{
    int n;
    cin >> n;

    map<string, int> dict; // 文字列と出現回数の辞書作成
    // ライブラリ化しよ
    for (string x; n--; dict[x]++)
    {             // 辞書内の文字列xに対応する出現回数を+1する
        cin >> x; // 文字列 x 入力
        if (dict[x] + 1 <= 1)
        {
            cout << x << endl;
        }
        else
        {
            cout << x << "(" << dict[x] << ")" << endl;
        }
    }
    return 0;
}