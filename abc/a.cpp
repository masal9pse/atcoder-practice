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
    // if (V < A || V - (A + B + C) == 0) {
    // // if (V < A || V <= (A + B + C)) {
    //     result = "F";
    // // } else if (V - A == 0 || V < A + B) {
    // } else if (V <= A || V < A + B) {
    //     result = "M";
    // // } else if (V - (A+B) <= 0 || V < A + B + C){
    // } else if (V <= (A+B)|| V < A + B + C){
    //   result = "T";
    // }
    // for (int i = 0; i < 10000; i++)
    // {

    // }
    while (V >= 0)
    {
        int calc1 = A + B;
        int calc2 = A + B + C;
        //   if (V > A) {
        //      V = V - A;
        //   } else if (V > A + B) {
        //      V = V - (A+B);
        //   } else if (V > A + B + C) {
        //     V = V - (A + B + C);
        //   }
        // int calc1 = A + B;
        // int calc2 = A + B + C;
        result = 'F';
        if (V > A)
        {
            V -= A;
            result = 'M';
        }
        // if (V > A + B || V == A)
        if (V > B || V == A)
        {
            // V = V - (A + B);
            V -=B;
            result = 'T';
        }

        // if (V > A + B + C || V == A + B)
        if (V > C || V == B)
        {
            // V = V - (A + B + C);
            V -= C;
            // result = 'T';
        }
        // if (V )
    }
    cout << result << endl;
}