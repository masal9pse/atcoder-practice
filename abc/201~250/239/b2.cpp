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

/*
 x < 0でかつ余りが出るならx/10-1する
 キーワード
 　負の割り算
*/
int main()
{
    ll x;
    cin >> x;
    if (x < 0 && x%10 != 0) cout << x/10-1 << endl;
    else cout << x/10 << endl;
    return 0;
}