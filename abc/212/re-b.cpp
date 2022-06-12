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
    string s;
    cin >> s;
    bool same = true;
    bool step = true;
    rep(i, 3)
    {
        int a = s[i] - '0';
        int b = s[i + 1] - '0';
        if (s[i] != s[i + 1])
        {
            same = false;
            // breakするとstepの判定処理が行われないまま処理が行われる。
        }

        if ((a + 1) % 10 != b % 10)
        {
            step = false;                
        }
    }
    if (step || same)
    {
        cout << "Weak" << endl;
    }
    else
    {
        cout << "Strong" << endl;
    }
}