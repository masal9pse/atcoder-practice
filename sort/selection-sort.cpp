#include <iostream>
// #define N 1000
using namespace std;

// void selectionSort();
// void out();

// int n, a[N];

int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++)
  {
    int min_idx_temp = i;
    for (int j = i + 1; j < n; j++)
    {
      if (a[min_idx_temp] > a[j])
      {
        min_idx_temp = j;
      }
    }
    // if (i != min_idx_temp) {
        int temp = a[i];
        a[i] = a[min_idx_temp];
        a[min_idx_temp] = temp;
        int o = 3;
      // }
  }

  for (int i = 0; i < n; i++)
  {
    if (i)
      cout << ' ';
    cout << a[i];
  }
  cout << endl;
  return 0;
}

// 2 5 3
// void selectionSort()
// {
//   for (int i = 0; i < n; i++)
//   {
//     int min_idx_temp = i;
//     for (int j = i + 1; j < n; i++)
//     {
//       if (a[min_idx_temp] > a[j])
//       {
//         min_idx_temp = j;
//       }
//       if (i != min_idx_temp)
//       {
//         int temp = a[i];
//         a[i] = a[min_idx_temp];
//         a[min_idx_temp] = temp;
//         int o = 3;
//       }
//     }
//   }
//   out();
// }

// void out()
// {
//   for (int i = 0; i < n; i++)
//   {
//     if (i)
//       cout << ' ';
//     cout << a[i];
//   }
//   cout << endl;
// }