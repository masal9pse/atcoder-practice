#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;    
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < N; i++) cin >> B[i];
    int samePositionCount = 0;
    int diffPositionCount = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j && A[i] == B[j]) {
                samePositionCount ++;
            } else if (i != j && A[i] == B[j]) {
                diffPositionCount++;
            } else {
            }
        }
    }
    cout << samePositionCount << endl;
    cout << diffPositionCount << endl;
    return 0;
}