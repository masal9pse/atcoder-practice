#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
        cin >> A[i];
    int count = 0;
    
    for (int i = 0; i < N; i++)
    {
        bool is_prime = true;
        if (A[i] == 1) {
            is_prime = false;
            continue;
        }

        if (A[i] == 2) {
            is_prime = true;
            count ++;
            continue;
        }

        for (int j = 2; j < A[i]; j++)
        {
            if (A[i] % j == 0) is_prime = false;
            int a = A[i];
            int b = 3;
        }
        if (is_prime) count ++;
    }
    cout << count << endl;
    return 0;
}