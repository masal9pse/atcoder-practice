#include <iostream>
#include <vector>
#include <map>
using namespace std;
using P = pair<int, int>;

int main()
{
    string s;
    cin >> s;
    int s_length = s.length();
    int count = 0;
    int tempCount = 0;
    for (int i = 0; i < s_length; i++)
    {
        if (s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T')
        {
            count++;
            if (count > tempCount)
            {
                tempCount = count;
            }
        }
        else
        {
            if (count > tempCount)
            {
                tempCount = count;
            }
            count = 0;
        }
    }
    cout << tempCount << endl;
    return 0;
}