#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n;
    cin >> n;
    int nowT = 0,nowX = 0,nowY = 0;
    bool can = true;
    for (int i = 1; i <= n; i++)
    {
        int t,x,y;
        cin >> t >> x >> y;
        for (; nowT < t; nowT++)
        {
            if (x != nowX) {
                nowX += x < nowX ? -1 : 1;
            } else {
                nowY += y < nowY ? -1 : 1;
            }
        }
        if (x != nowX || y != nowY) {
            can = false;
        }
    }
    if (can) cout << "Yes" << endl;
    else cout << "No" << endl;
}