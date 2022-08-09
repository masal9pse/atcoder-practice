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

int convertDigitsLength(int n, int k)
{    
    int ans = 0;
    while (n > 0)
    {        
        n /= k;
        ans ++;
    }
    
    return ans;
}

int main(void)
{

    int n;
    int k;
    cin >> n >> k;
    int ans = convertDigitsLength(n,k);
    cout << ans << endl;
    return 0;
}