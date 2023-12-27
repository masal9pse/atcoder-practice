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
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int facctorialMethod(int k){
    int sum = 1;
    for (int i = 1; i <= k; ++i)
    {
        sum *= i;
    }
    return sum;
}

int main()
{
    int p;
    cin >> p;
    vector<int> calc(10);
    int n = 10;
    rep(i,n) calc[i] = 1;

    rep(i,n) {
        calc[i] = facctorialMethod(i+1);
    }
    sort(calc.rbegin(),calc.rend());
    int count = 0;
    rep(i,n) {
        rep(j,100) {
            if (p < calc[i]) break;
            if (p >= calc[i]) {
                p -= calc[i];
                count++;
            }
            if (p == 0) {
                cout << count << endl;
                return 0;
            }
        }
    }
    return 0;
}
