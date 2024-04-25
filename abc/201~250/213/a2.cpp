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

int main()
{
    // xor　排他的論理和
    // これがめちゃくちゃわかりやすい　https://atcoder.jp/contests/APG4b/tasks/APG4b_ac
    int a,b;
    cin >> a >> b;
    cout << (a^b) << endl;
    return 0;
}