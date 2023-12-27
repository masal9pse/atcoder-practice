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
    int x1, y1;
    cin >> x1 >> y1;
    int x2, y2;
    cin >> x2 >> y2;
    int x3, y3;
    cin >> x3 >> y3;
    int ans_x = 0;
    int ans_y = 0;
    int x_length = 0;
    int y_length = 0;
    if (x1 == x2)
    {
        y_length = abs(y1 - y2);
        if (y1 == y3)
        {
            ans_x = x2;
            if (y2 >= 0)
            {
                ans_y = y2 - y_length;
            }
            else
            {
                ans_y = y2 + y_length;
            }
        }
        else if (y2 == y3)
        {
            ans_x = x3;
            if (y3 >= 0)
            {
                ans_y = y3 - y_length;
            }
            else
            {
                ans_y = y3 + y_length;
            }
            // ans_y = y3 + y_length;
        }
    } else if (x1 == x3) {
        y_length = abs(y2 - y3);
        if (y1 == y2)
        {
            ans_x = x3;
            if (y3 >= 0)
            {
                ans_y = y3 - y_length;
            }
            else
            {
                ans_y = y3 + y_length;
            }
        }
        else if (y2 == y3)
        {
            ans_x = x3;
            if (y3 >= 0)
            {
                ans_y = y3 - y_length;
            }
            else
            {
                ans_y = y3 + y_length;
            }
            // ans_y = y3 + y_length;
        }
    }
    cout << ans_x << " " << ans_y;
    return 0;
}