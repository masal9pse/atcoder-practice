#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int h,w;
    cin >> h >> w;
    int r,c;
    cin >> r >> c;
    int ans = 0;
    vector<pair<int,int>> A;
    int k = 0;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)3
        {        
          A.push_back(make_pair(i+1,j+1));
          int k = 0;
        }
    }

    for (int i = 0; i < h*w; i++)
    {
        if (abs(A[i].first - r) + abs(A[i].second - c) == 1) {
            ans ++;
        }
    }
    cout << ans << endl;
    return 0;
}