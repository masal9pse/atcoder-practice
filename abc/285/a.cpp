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
#include <queue>
using namespace std;
using ll = long long;
using P = pair<int, int>;
using vi = vector<int>;
using vs = vector<string>;
using mi = map<int, int>;
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    int a, b;
    cin >> a >> b;
    if (b < a)
        swap(a, b);
    if (a == 1 && b == 2 || a == 1 && b == 3)
    {
        cout << "Yes" << endl;
    }
    else if (a == 2 && b == 4 || a == 2 && b == 5)
    {
        cout << "Yes" << endl;
    }
    else if (a == 3 && b == 6 || a == 3 && b == 7)
    {
        cout << "Yes" << endl;
    }
    else if (a == 4 && b == 8 || a == 4 && b == 9)
    {
        cout << "Yes" << endl;
    }
    else if (a == 5 && b == 10 || a == 5 && b == 11)
    {
        cout << "Yes" << endl;
    }
    else if (a == 6 && b == 12 || a == 6 && b == 13)
    {
        cout << "Yes" << endl;
    }
    else if (a == 7 && b == 14 || a == 7 && b == 15)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}