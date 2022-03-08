#include <iostream>
#include <iterator>
#include <algorithm>
#include <limits>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    int N, count = 0;
    cin >> N;
    int A[N];
    // std::sort(input.begin(), input.end());
    // std::cout << input << std::endl;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        int c = 1;
    }

    // for (int i = 0; i < N; i++)
    // {
    //     cout << A[i] << " ";
    //     int q = 1;
    // }

    for (int i = 1; i < N; i++)
    {
        int temp = A[i];
        int j = i - 1;
        int b = 1;
        while (j >= 0 && A[j] > temp)
        {
            A[j + 1] = A[j];
            // A[j + 1] = temp;
            // tempはA[i]のためで期待通りにならない
            j--;
            int c = 1;
        }
        A[j + 1] = temp;
        int o = 3;
        // if (j >= 0)
        // {
        //     A[j + 1] = A[j];
        //     int c = 1;
        // }
        for (int i = 0; i < N; i++)
        {
            cout << A[i] << " ";
        }
        cout << "\n" << endl;
    }

    // for (int i = 0; i < N; i++)
    // {
    //     cout << A[i] << " ";
    // }

    return EXIT_SUCCESS;
}

// vector<int> insertionSort () {

// }