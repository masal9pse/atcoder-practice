#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <map>
#include <string>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int h, w;
    cin >> h >> w;
    string t = "snuke";
    vector<string> s(h);
    rep(i, h) cin >> s[i];
    
    vector<int> di = {-1, -1, 0, 0, 1, 1, 1, -1};
    vector<int> dj = {0, 1, -1, 1, -1, 0, 1, -1};
    rep(si, h)
    {
        rep(sj, w)
        {
            rep(v, 8)
            {
                int i = si;
                int j = sj;
                rep(k, 5)
                {
                    if (i < 0 || j < 0 || h <= i || w <= j)
                    {
                        break;
                    }
                    if (s.at(i).at(j) != t[k])
                    {
                        break;
                    }
                    // snukeが見つかったということ
                    if (k == 4)
                    {
                        i = si, j = sj;
                        rep(nk, 5)
                        {
                            cout << i + 1 << " " << j + 1 << endl;
                            // i += di[v], j += dj[v];
                            i += di.at(v), j += dj.at(v);
                        }
                        return 0;
                    }
                    // i += di[v], j += dj[v];
                    // cout << i << " " << j << " " << v << endl;
                    i += di.at(v), j += dj.at(v);
                }
            }
        }
    }
}