#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    int resultMinSize = 0;
    for (int a = 1; a <= n; a++)
    {
        int b;
        if (n % a == 0)
        {
            b = n / a;
            if (n == b * a)
            {
                int sizeA = to_string(a).size();
                int sizeB = to_string(b).size();
                int tempMinSize = 0;
                tempMinSize = max(sizeA, sizeB);
                if (resultMinSize == 0)
                {
                    resultMinSize = tempMinSize;
                    int c = 0;
                }
                else if (resultMinSize != 0)
                {
                    resultMinSize = min(tempMinSize, resultMinSize);
                }
            }
            int c = 3;
        }
    }
    cout << resultMinSize << endl;
    return 0;
}