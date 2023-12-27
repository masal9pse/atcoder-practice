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
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if (a <= c) {        
        if (a == c && b < d) {
        cout << "Takahashi" << endl;
        } else if (a == c && d < b) {
            cout << "Aoki" << endl;
        }else {
            cout << "Takahashi" << endl;
        }
    } else if (c <= a) {
        if (c == a && d < b) {
            cout << "Aoki" << endl;
        } else if (c == a && b < d) {
            cout << "Takahashi" << endl;
        } else {
             cout << "Aoki" << endl;
        }
    }
}