#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;    
    cin >> N;
    vector<string> S(N);
    for (int i = 0; i < N; i++) cin >> S[i];
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        int sSize = S[i].size();
        bool flag = true;
        for (int j = 0; j < sSize; j++)
        {
            char a = S[i][j];
            char b = S[i][(sSize-1)-j];
            if (S[i][j] != S[i][(sSize-1)-j]) {
               flag = false;
            }
        }
        if (flag) count++;
    }
    cout << count << endl;
    return 0;
}