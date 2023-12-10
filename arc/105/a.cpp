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
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    vector<int> cookies = {a,b,c,d};
    sort(cookies.begin(),cookies.end());
    if (cookies[0] + cookies[3] == cookies[1] + cookies[2]) {
        cout << "Yes" << endl;
        return 0;
    } 
    if (cookies[0] + cookies[1] + cookies[2] == cookies[3]) {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}