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
    // s~tの範囲を求めてからforで回して%24したものがxと正しいか
    int s,t,x;
    cin >> s >> t >> x;
    int range1 = 0;
    int range2 = 0;
    while (range2 != t)
    {
        range1 = (range1 + 1);
        range2 = (range2+ 1)%24;
    }
    for (int i = s; i <= range1; i++)
    {
        
    }
    
    return 0;
}