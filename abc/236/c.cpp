#include <iostream>
#include <vector>
// #include <string>
using namespace std;

//  int N;    
//     cin >> N;
//     vector<string> S(N);
//     for (int i = 0; i < N; i++) cin >> S[i]
int main()
{
    int n,m;
    cin >> n >> m;
    vector<string> s[n];
    vector<string> t[m];
    for (int i = 0; i < n; i++) {
       cin >> s[i];
    }
    for (int i = 0; i < m; i++) cin >> t[i];

    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = 0; j < m; j++)
        {
          if (s[i] == t[j]) {
              flag = true;
          }
        }
        if (flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}