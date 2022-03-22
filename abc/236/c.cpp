#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    set<string> st;
    for (int i = 0; i < n; i++)
        cin >> s[i];
    for (int i = 0; i < m; i++)
    {
        string t;
        cin >> t;
        st.insert(t);
    }

    for (int i = 0; i < n; i++)
    {
        if (st.count(s[i]))
        {
            cout << st.count(s[i]) << endl;
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
    return 0;
}