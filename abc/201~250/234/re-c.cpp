#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
#include <map>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

string toBinary(ll n)
{
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? "0" : "2" );
        n /= 2;
    }
    return r;
}

int main()
{
    ll k;
    cin >> k;
    string s;
    s = toBinary(k);
    reverse(s.begin(),s.end());
    cout << s << endl;
    return 0;
}