#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string S;
    char c;
    cin >> S;
    cin >> c;
    int sLength = S.length();
    bool flag = false;
    for (int i = 0; i < sLength; i++)
    {
        if (S[i] == c)
        {
            flag = true;
        }
    }
    if (flag) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
// char => をstringに変えるとエラーになった