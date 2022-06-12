#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <map>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)
 
int main()
{
    int n;
    cin >> n;
    map<int,int> p;
    int a;
    rep(i,n) {
        cin >> a;
        p[a] = i;
    }
    for (auto &i: p)
    {
        cout << i.second + 1 << " ";
    }
    cout << endl;
    return 0;
}