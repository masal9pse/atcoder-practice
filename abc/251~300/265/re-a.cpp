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
const double PI = acos(-1);

int main()
{
    int x, y, n;
    cin >> x >> y >> n;
    int tmp1 = 0;
    int tmp2 = 0;
    int ans_money = 0;
    if (x <= y) {
        tmp1 = x;
        tmp2 = 1;
    } else {
        tmp1 = y;
        tmp2 = 3;
    }

    int count1 = n / tmp2;   
    int count2 = n % tmp2;
    if (tmp2 == 1) {
        rep(i,count1) {
            ans_money += x;
        }
        rep(i,count2) {
            ans_money += y;
        }
    } else {
        rep(i,count1) {
            ans_money += y;
        }
        rep(i,count2) {
            ans_money += x;
        }
    }
    cout << ans_money << endl;
    // rep(i,100) {
    //     rep(j,100) {
    //         if 
    //     }
    // }
    return 0;
}