#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    ll k;
    cin >> k;
    string s;

    while (k > 0)
    {
        s += to_string(k%2*2);
        k/= 2;
    }
    reverse(s.begin(),s.end());
    cout << s << endl;
}