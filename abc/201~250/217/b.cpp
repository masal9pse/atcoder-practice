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
    vector<string> al = {"ABC", "ARC", "AGC", "AHC"};
    vector<bool> bfl(4);
    rep(i,3) {
        string k;
        cin >> k;
        rep(j,4) {
            if (al[j] == k) {
                bfl[j] = true;
                break;
            }
        }
    }

    rep(i,4) {
        if (!bfl[i]) {
            cout << al[i] << endl;
            return 0;
        }
    }
    return 0;
}