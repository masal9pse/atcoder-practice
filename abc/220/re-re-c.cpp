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
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n, x;
    cin >> n;
    vector<int> a(n);
    ll sum = 0;
    rep(i, n)
    {
        cin >> a[i];
        sum += a[i];
        int k = 3;
    }
    cin >> x;
    int count = n;    

    while (sum < x)
    {
        rep(i, n)
        {
            sum += a[i];
            if (sum > x)
            {
                break;
            }
            else
            {
                count++;
                int k = 3;
            }
        }
        if (sum > x)
        {
            break;
        }
    }

    cout << count << endl;
    return 0;
}