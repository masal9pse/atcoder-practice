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
    // int x1,y1;
    // cin >> x1 >> y1;
    // int x2,y2;
    // cin >> x2 >> y2;
    // int x3,y3;
    // cin >> x3 >> y3;

    int x_left = 0;
    int y_left = 0;
    int y_length = 0;
    int x_length = 0;
    int ans_x = 0;
    int ans_y = 0;

    int mankana_x = 0;
    int mankana_y = 0;
    for (int i = 0; i < 3; i++)
    {
        int x,y;
        cin >> x >> y;
        if (i == 0) {
            x_left = x;
            y_left = y;
        } else if (i == 1){
            // x_left = x - 1;
            // ２個前の要素がどうしても使えない.....
            if (x == x_left) {
                // ans_x = x_left - x;
                y_length = abs(y_left - y);
                int k = 3;
                // ans_y = 
            } else if (y == y_left) {
                x_length = abs(x_left - x);

            }
            // x_left = x;
            // y_left = y;
            mankana_x = x;
            mankana_y = y;
        } else if (i == 2) {
            if (x == x_left) {
              ans_y = y - y_length;
              ans_x = x;
            } else if (y == y_left) {
                ans_x = x;
                if ()
                ans_y = y - y_length;
                // x_length = x_left - x;
            }
        }
    }
    cout << ans_x << " " << ans_y;
    return 0;
}