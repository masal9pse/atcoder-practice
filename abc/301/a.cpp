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
    cin >> n;
    string s;
    cin >> s;
    int takahashi = 0;
    int aoki = 0;
    int flag = 0;
    if (s[n-1] == 'A') flag++;
    rep(i, n)
    {
        if (s[i] == 'T')
        {            
            takahashi++;
        }
        else
        {
            aoki++;
        }
    }
    if (takahashi == aoki) {
        if (flag) {
            cout << "T" << endl;
        } else {
            cout << "A" << endl;
        }
    } else if (takahashi > aoki) {
        cout << "T" << endl;
    } else {
        cout << "A" << endl;
    }
    return 0;
}