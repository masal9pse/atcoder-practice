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

// 67 66
// No

// 全て１が出た場合に66を超えてしまうケースがある
int main()
{
    int a,b;
    cin >> a >> b;
    if (a <= b && b <= a*6) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}