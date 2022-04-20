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
    int x1,x2,x3,y1,y2,y3,ansX,ansY;

    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

    if (x1 == x2) ansX = x3;
    if (x2 == x3) ansX = x1;
    if (x3 == x1) ansX = x2;

    if (y1 == y2) ansY = y3;
    if (y2 == y3) ansY = y1;
    if (y3 == y1) ansY = y2;

    cout << ansX << " " << ansY;
}