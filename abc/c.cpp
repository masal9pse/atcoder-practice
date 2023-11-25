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
    string s;
    cin >> s;
    vector<pair<bool, int>> alphabetUsed(26);

    // cout << 'a' - 'a' << endl;
    // cout << 'z' - 'a' << endl;
    int count = 0;
    char before = s[0];

    rep(i, n)
    {
        // if (alphabetUsed[s[i] - 'a'].first && before == s[i])
        if(i == n-1) {
            if (!alphabetUsed[s[i] - 'a'].first) {
                count++;
                alphabetUsed[s[i] - 'a'].second = count;
                break;
            }
        }

        if (before == s[i])
        {
            count++;            
        }        
        else
        {
            alphabetUsed[s[i] - 'a'].first = true;
            if (alphabetUsed[s[i] - 'a'].second < count)
            {
                alphabetUsed[s[i] - 'a'].second = count;
            }
            before = s[i];
            count = 0;
            count++;
        }
        
    }
    int ans = 0;
    rep(i,26) {
        ans += alphabetUsed[i].second;
    }
    cout << ans << endl;
    return 0;
}