#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

// 時計をイメージできてなかった。
int calc1 (int a,int b) {
    int count = 0;
    while (true)
    {
        if (a == b) {
            return count;
        }
        a++;
        count++;
        if (a == 10) a = 0;
    }
}
int calc2 (int a,int b) {
    int count = 0;
    while (true)
    {
        if (a == b) {
            return count;
        }
        a--;
        count++;
        if (a == -1) a = 9;
    }
}

int main()
{
    int a,b;
    cin >> a >> b;    
    int red_count = calc1(a,b);
    int blue_count = calc2(a,b);
    int ans = min(blue_count,red_count);
    cout << ans << endl;
}