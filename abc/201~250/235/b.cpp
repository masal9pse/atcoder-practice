
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i, n) cin >> h[i];
    int ans = h[0];
    rep(i, n)
    {    
        if (h[i] < h[i + 1])
        {
            ans = h[i + 1];
        }
        else
        {
            cout << ans << endl;
            return 0;
        }     
    }
    cout << ans << endl;
    return 0;
}