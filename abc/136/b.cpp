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
        string i_str = to_string(i);
        int size = i_str.length();
        if (size % 2 != 0) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}