#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    int n;
    string s;
    cin >> n >> s;
    // tempにABCが入ったらtempを初期化する。
    string temp;
    int finder = -1;
    int count = 0;
    int finderTemp = -1;
    for (int i = 0; i < n; i++)
    {
        temp += s[i];
        finder = temp.find("ABC");
        if (finder >= 0)
        {
            count++;
            temp = "";
        }
    }
    cout << count << endl;
}