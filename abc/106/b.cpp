#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        int yakusuCount = 0;
        if (i % 2 != 0)
        {
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    yakusuCount++;
                }
            }
            if (yakusuCount == 8)
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}