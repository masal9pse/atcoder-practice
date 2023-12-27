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
    int n;
    string s;
    cin >> n;
    cin >> s;
    std::string search = "na";
    std::string replace = "nya";
    size_t pos = s.find(search);
    while (pos != std::string::npos)
    {
        s.replace(pos, search.length(), replace);
        pos = s.find(search, pos + replace.length());
    }

    std::cout << s << std::endl;
    return 0;
}