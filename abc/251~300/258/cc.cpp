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
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int index = 0;
    rep(qi, q)
    {
        int type, x;
        cin >> type >> x;
        // ここからは自分で
        if (type == 1)
        {
            index = (index - x + n) % n;
        }
        else
        {            
            cout << s[(index + x - 1) % n] << endl;
        }
    }
    return 0;
}