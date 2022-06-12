#include <iostream>
using namespace std;
int main(void)
{    
    // 253 〇の座標を求めて、z,yの足し算をすればよい。
    int h, w;
    cin >> h >> w;
    pair<int, int> one;
    pair<int, int> second;
    for (int i = 0; i < h; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < w; j++)
        {
            if (one.first != 0 || one.second != 0)
            {
                if (s[j] == 'o')
                {
                    second.first = j;
                    second.second = i;
                    int c = 3;
                    break;
                }
            }

            if (s[j] == 'o')
            {
                one.first = j;
                one.second = i;
                int k = 3;
                // break;
            }
        }
    }

    int x = abs(one.first-second.first);
    int y = abs(one.second-second.second);
    cout << x + y << endl;
}

// (2,0),(0,1)
// 2+1;

// (1,0),(1,4)
// =>(1-1)+ (|4-0|) = 4