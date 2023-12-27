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
    set<int> k = {2,3,5};
    if (k.find(3) != k.end()) {
        // 3が見つかった
        int c = 3;
    }

    // set<pair<int,int>> sp = {{0,0},{-1,0},{-1,1}};
    // if (sp.find({-1,0}) != sp.end()) {
    //     // -1,0が見つかった
    //     int cc = 33;
    // }
    return 0;
}