// 37
// qeixfumagitvtophbepfepxbfgsqcugugpugt
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
    int n;
    cin >> n;
    string s;
    cin >> s;   
    // ソートすると隣接していないが、aとbがある文字がYesになってしまう 
    rep(i,n-1) {
        if (s[i]=='a' && s[i+1] == 'b') {
            cout << "Yes" << endl;
            return 0;
        }
        if (s[i]=='b' && s[i+1] == 'a') {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}