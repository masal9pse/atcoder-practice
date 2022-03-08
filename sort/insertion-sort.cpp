#include <iostream>
#include <iterator>
#include <algorithm>
#include <limits>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int N, count = 0;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];

        int c = 1;
    }

    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
        int q = 1;
    }
    cout << "\n" << endl;

    for (int i = 1; i < N; i++)
    {
        int temp = A[i];
        int j = i - 1;
        int b = 1;
        while (j >= 0 && A[j] > temp)
        {
            A[j + 1] = A[j];
            j--;
            int c = 1;
        }
        A[j + 1] = temp;
        int o = 3;
        
        for (int i = 0; i < N; i++)
        {
            cout << A[i] << " ";
        }
        cout << "\n" << endl;
    }


    return EXIT_SUCCESS;
}