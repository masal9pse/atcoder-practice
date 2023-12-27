#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main(void)
{
    int n;
    cin >> n;
    vector<int> s(n);

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        // std::cout << s[i] << std::endl;
    }

    int count = 0;
    // これだと同じsが同じ結果になることがある。
    // だからsetを使った方がいい。
    for (int i = 0; i < n; i++)
    {
        for (int a = 1; a <= 1000; a++)
        {
            for (int b = 1; b <= 1000; b++)
            {
                int ans = 4 * a * b + 3 * a + 3 * b;
                if (ans < 1000)
                {
                    if (ans == s[i])
                    {
                        count++;
                        int k = 3;
                    }
                }
            }
        }
    }
    std::cout << n - count << std::endl;
}