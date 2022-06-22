#include <iostream>
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
    int s, t, x;
    cin >> s >> t >> x;
    bool flag = false;
    int now_time = s;
    while (true)
    {
        if (now_time == x)
        {
            flag = true;
            break;
            if (t == x) {
             flag = false;
             break;   
            }
        }
        now_time++;
        if (now_time > 23)
            now_time = 0;        
        if (now_time >= t)
            break;
    }
    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}