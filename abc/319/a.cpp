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
    map<string,string>  a = {
        {"tourist", "3858"},
        {"ksun48", "3679"},
        {"Benq", "3658"},
        {"Um_nik", "3648"},
        {"apiad", "3638"},
        {"Stonefeang", "3630"},
        {"ecnerwala", "3613"},
        {"mnbvmar", "3555"},
        {"newbiedmy", "3516"},
        {"semiexp", "3481"}
    };
    string s;
    cin >> s;
    cout << a[s] << endl;
    return 0;
}