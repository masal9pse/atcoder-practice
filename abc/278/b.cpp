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
#include <queue>
using namespace std;
using ll = long long;
using P = pair<int, int>;
using vi = vector<int>;
using vs = vector<string>;
using mi = map<int, int>;
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    int h, m;
    cin >> h >> m;
    vector<int> tate(4);
    tate[0] = h / 10;
    tate[1] = h % 10;
    tate[2] = m / 10;
    tate[3] = m % 10;
    vector<int> yoko(4);
    yoko[0] = h / 10;
    yoko[1] = m / 10;
    yoko[2] = h % 10;
    yoko[3] = m % 10;

    // 23 57 => 25 37 
    // if (yoko[0] == 2 && yoko[1] > 4) {

    // }
    // ケース２
    if (yoko[2] > 6)
    {
        tate[1]++;
        if (tate[1] > 9)
        {
            tate[1] = 0;
            tate[0]++;
            tate[2] = 0;
            tate[3] = 0;
        }
        cout << tate[0] << tate[1] << ' ' << tate[2] << tate[3] << endl;
        return 0;
    }


    // ケース３
    if (yoko[0] == 2 && yoko[1] > 4)
    {
        tate[1]++;
        tate[2] = 0;
        tate[3] = 0;
        if (tate[0] == 2 && tate[1] == 4) {
            cout << 00 << ' ' << 00 << endl;
            return 0;
        }
        cout << tate[0] << tate[1] << ' ' << tate[2] << tate[3] << endl;
        return 0;
    }
    cout << tate[0] << tate[1] << ' ' << tate[2] << tate[3] << endl;
    return 0;
}