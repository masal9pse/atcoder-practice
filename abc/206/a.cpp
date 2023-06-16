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

// 5分
int main()
{
    int n; 
    cin >> n;
    int ans = 1.08 * n;
    if (ans < 206) {
        cout << "Yay!" << endl;
    } else if (ans == 206) {
        cout << "so-so" << endl;
    } else {
        cout << ":(" << endl;
    }
    return 0;
}