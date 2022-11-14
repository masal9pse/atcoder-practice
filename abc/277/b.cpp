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
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    rep(i, n)
    {
        if (s[i][0] == 'H' || s[i][0] == 'D' || s[i][0] == 'C' || s[i][0] == 'S')
        {
        }
        else
        {
            cout << "No" << endl;
            return 0;
        }
        if (s[i][1] == 'A' || s[i][1] == '2' || s[i][1] == '3' || s[i][1] == '4' || s[i][1] == '5' || s[i][1] == '6' || s[i][1] == '7' || s[i][1] == '8' || s[i][1] == '9' || s[i][1] == 'T' || s[i][1] == 'J' || s[i][1] == 'Q' || s[i][1] == 'K')
        {
        }
        else
        {
            cout << "No" << endl;
            return 0;
        }
        int size = s[i].size();
        rep(j, i)
        {            
            if (s[i] == s[j]) {
                cout << "No" << endl;
                return 0;
            }
        }
        // rep(j, size)
        // {
        //     rep(k, j)
        //     {
        //         if (s[i][j] == s[i][k])
        //         {
        //             cout << "No" << endl;
        //             return 0;
        //         }
        //     }
        // }
    }
    cout << "Yes" << endl;
    return 0;
}