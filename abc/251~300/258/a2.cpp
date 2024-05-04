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
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int k;
    cin >> k;
    int m = 0,h = 21;
    // 時間の分割できたのいいね！
    m += k % 60;
    h += k/60;
    // 桁埋めできてえらい、あと文字列も追加えらい
    printf("%d:%02d\n",h,m);
    return 0;
}