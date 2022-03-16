#include <iostream>
#include <vector>
using namespace std;
// #define rep for

int main()
{
    int V, A, B, C;
    cin >> V >> A >> B >> C;
    int count = 0;
    string result;
    while (V >= 0)
    {
        int calc1 = A + B;
        int calc2 = A + B + C;        
        result = 'F';
        if (V >= A)
        {
            V -= A;
            result = 'M';
        } else if (V - A < 0) {
            break;
        }
        // if (V > A + B || V == A)
        if (V >= B || V == A)
        {
            // V = V - (A + B);
            V -=B;
            result = 'T';
        } else if (V - B < 0) {
            break;
        }

        // if (V > A + B + C || V == A + B)
        if (V >= C || V == B)
        {
            // V = V - (A + B + C);
            V -= C;
            // result = 'T';
        } else if (V - C < 0) {
            break;
        }
        // if (V )
    }
    cout << result << endl;
}