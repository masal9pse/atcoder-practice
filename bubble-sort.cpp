#include <stdio.h>
#include <iostream>
using namespace std;

int bubbleSort(int array[], int array_size)
{
    int i, j, k;
    int count = 0;

    for (i = 0; i < (array_size - 1); i++)
    {
        for (j = (array_size - 1); j > i; j--)
        {
            if (array[j] < array[j - 1])
            {
                count++;
                k = array[j];
                array[j] = array[j - 1];
                array[j - 1] = k;
            }
        }
    }
    return count;
}

int main(void)
{
    int n, count;
    std::cin >> n;
    int array[n];
    for (int i = 0; i < n; ++i)
        scanf(" %d", &array[i]);

    count = bubbleSort(array, sizeof(array) / sizeof(array[0]));
    for (int i = 0; i < n; i++)
    {
        cout << array[i];
        if (i != n)
            cout << " ";
    }
    // cout << endl
    //      << count << endl;
    cout << count << endl;

    // for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    // {
    //     // printf("%d ", array[i]);
    //     // std::cout << array[i] << std::endl;

    //     //    std::cout << array[i] << " ";
    //     cout << array[i];
    //     if (i != n)
    //         cout << " ";
    // }
    // // printf("\n");
    // // std::cout << "\n" << std::endl;
    // // printf("%d",count);
    // // std::cout << count << std::endl;
    // cout << endl
    //      << count << endl;
    // // printf("\n");

    // return 0;
}