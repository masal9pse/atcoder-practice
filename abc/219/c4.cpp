#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    /*
      1. Atcoder王国から元の世界の文字列に戻したリストを作成 bzz => ayy, bzy => ayz [ayy,ayz] 
      2. ソートの実行 [ayy,ayz]
      3. Atcoder王国の文字列に直す。 [bzz,byz]
    */
    string x;
    cin >> x;
    int n;
    cin >> n;
    vector<int> a(26);
    rep(i, 26)
    {
        int index = x[i] - 'a';
        char index_c = x[i] - 'a';
        a[index] = i + 1;
        int d = 3;
    }
    vector<string> s(n);
    rep(i,n) cin >> s[i];

    return 0;
}