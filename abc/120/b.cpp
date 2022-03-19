#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int a, b, k;
    cin >> a >> b >> k;

    int count = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            for (int k = 1; k <= b; k++)
            {
                if (a % j == 0 && a % k == 0 && b % j == 0 && b % k == 0)
                {
                    count++;
                    int o = 3;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}