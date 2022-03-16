#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int N = S.length();
    int count = 0;
    for (int i = 'a'; i <= 'z'; i++)
    {
        bool flag = false;
        for (int j = 0; j < N; j++)
        {
            if (S[j] == i) {
                flag = true;
            }
        }
        if (flag) count++;
    }
    cout << count << endl;
    return 0;
}
// char => をstringに変えるとエラーになった