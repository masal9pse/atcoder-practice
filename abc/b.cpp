// 1時間くらい
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
                
            }
        }
        if (is_tak_code)
            ans.push_back({i, j});
        int ll = 3;
    }
    return 0;
}