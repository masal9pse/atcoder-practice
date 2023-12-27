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

int main()
{
    int n, d;
    cin >> n >> d;
    int count = 0;
    rep(i, n)
    {
        int p, q;
        cin >> p >> q;
        double ans;
        // なぜp*pすると３つ目が通らないのか？
        ans = sqrt(pow(p, 2) + pow(q, 2));
        if (ans <= d)
            count++;
    }
    cout << count << endl;
    return 0;
}