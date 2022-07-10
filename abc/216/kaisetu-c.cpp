#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
#include <map>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < n; i++)

// ランレングス圧縮
vector<P> rle(const string& s) {
    vector<P> res;
    for (char c:s)
    {
        if (res.size() > 0 && res.back().first == c) {
            res.back().second++;
        } else {
            res.emplace_back(c,1);
        }
    }
    return res;
}

int main()
{
    ll n;
    cin >> n;
    string ans;
    while (n)
    {        
        if (n&1) {
            ans += 'A';
            n --;            
        }else {
            ans += 'B';
            n /= 2;
            // n >>= 1;
        }
    }
    reverse(ans.begin(),ans.end());
    cout << ans << endl;
    return 0;
}