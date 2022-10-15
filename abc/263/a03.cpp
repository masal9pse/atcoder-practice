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
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    vector<int> o = {a, b, c, d, e};
    sort(o.begin(), o.end());
    if (o[0] == o[1] && o[1] == o[2] && o[3] == o[4])
        cout << "Yes" << endl;
    else if (o[0] == o[1] && o[2] == o[3] && o[3] == o[4])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}