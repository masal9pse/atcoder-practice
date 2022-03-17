#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int V, A, B, C;
    cin >> V >> A >> B >> C;
    int count = 0;
    string result;
    while (V >= 0)
    {
        result = 'F';
        if (V >= A)
        {
            V -= A;
            result = 'M';
        }
        else if (V - A < 0)
        {
            break;
        }
        if (V >= B || V == A)
        {
            V -= B;
            result = 'T';
        }
        else if (V - B < 0)
        {
            break;
        }

        if (V >= C || V == B)
        {
            V -= C;
        }
        else if (V - C < 0)
        {
            break;
        }
    }
    cout << result << endl;
}