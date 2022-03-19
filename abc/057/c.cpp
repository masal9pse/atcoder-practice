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
        for (int b = 1; b <= n; b++)
        {
            if (n == a * b)
            {
                int tempMinSize = 0;
                int sizeA = to_string(a).size();
                int sizeB = to_string(b).size();
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
        }
    }
    cout << resultMinSize << endl;
    return 0;
}