// 3時間くらい
#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <map>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    vector<pair<int, int>> ans;
    rep(i, n) rep(j, m)
    {
        bool is_tak_code = true;
        if (n - i < 9) break;
        if (m - j < 9) break;
        rep(k, 9)
        {
            rep(l, 9)
            {
                int ik = i + k;
                int jl = j + l;
                // 右上
                if (k == 0 && l == 0 && s[ik][jl] != '#')
                {
                    is_tak_code = false;
                }
                if (k == 0 && l == 1 && s[ik][jl] != '#')
                {
                    is_tak_code = false;
                }
                if (k == 0 && l == 2 && s[ik][jl] != '#')
                {
                    is_tak_code = false;
                }
                if (k == 0 && l == 3 && s[ik][jl] != '.')
                {
                    is_tak_code = false;
                }

                if (k == 1 && l == 0 && s[ik][jl] != '#')
                {
                    is_tak_code = false;
                }
                if (k == 1 && l == 1 && s[ik][jl] != '#')
                {
                    is_tak_code = false;
                }
                if (k == 1 && l == 2 && s[ik][jl] != '#')
                {
                    is_tak_code = false;
                }
                if (k == 1 && l == 3 && s[ik][jl] != '.')
                {
                    is_tak_code = false;
                }

                if (k == 2 && l == 0 && s[ik][jl] != '#')
                {
                    is_tak_code = false;
                }
                if (k == 2 && l == 1 && s[ik][jl] != '#')
                {
                    is_tak_code = false;
                }
                if (k == 2 && l == 2 && s[ik][jl] != '#')
                {
                    is_tak_code = false;
                }
                if (k == 2 && l == 3 && s[ik][jl] != '.')
                {
                    is_tak_code = false;
                }

                if (k == 3 && l == 0 && s[ik][jl] == '#')
                {
                    is_tak_code = false;
                }
                if (k == 3 && l == 1 && s[ik][jl] == '#')
                {
                    is_tak_code = false;
                }
                if (k == 3 && l == 2 && s[ik][jl] == '#')
                {
                    is_tak_code = false;
                }
                if (k == 3 && l == 3 && s[ik][jl] == '#')
                {
                    is_tak_code = false;
                }

                // 左下                
                if (k == 5 && l == 5 && s[ik][jl] == '#')
                {
                    is_tak_code = false;
                }
                if (k == 5 && l == 6 && s[ik][jl] == '#')
                {
                    is_tak_code = false;
                }
                if (k == 5 && l == 7 && s[ik][jl] == '#')
                {
                    is_tak_code = false;
                }
                if (k == 5 && l == 8 && s[ik][jl] == '#')
                {
                    is_tak_code = false;
                }

                if (k == 6 && l == 5 && s[ik][jl] == '#')
                {
                    is_tak_code = false;
                }
                if (k == 6 && l == 6 && s[ik][jl] == '.')
                {
                    is_tak_code = false;
                }
                if (k == 6 && l == 7 && s[ik][jl] == '.')
                {
                    is_tak_code = false;
                }
                if (k == 6 && l == 8 && s[ik][jl] == '.')
                {
                    is_tak_code = false;
                }

                if (k == 7 && l == 5 && s[ik][jl] == '#')
                {
                    is_tak_code = false;
                }
                if (k == 7 && l == 6 && s[ik][jl] == '.')
                {
                    is_tak_code = false;
                }
                if (k == 7 && l == 7 && s[ik][jl] == '.')
                {
                    is_tak_code = false;
                }
                if (k == 7 && l == 8 && s[ik][jl] == '.')
                {
                    is_tak_code = false;
                }

                if (k == 8 && l == 5 && s[ik][jl] == '#')
                {
                    is_tak_code = false;
                }
                if (k == 8 && l == 6 && s[ik][jl] == '.')
                {
                    is_tak_code = false;
                }
                if (k == 8 && l == 7 && s[ik][jl] == '.')
                {
                    is_tak_code = false;
                }
                if (k == 8 && l == 8 && s[ik][jl] == '.')
                {
                    is_tak_code = false;
                }
            }
        }
        if (is_tak_code)
            ans.push_back({i, j});
    }
    rep(i,ans.size()) {
        cout << ans[i].first + 1 << " " << ans[i].second + 1 << endl;
    }
    return 0;
}