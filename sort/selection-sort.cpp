#include <iostream>
// #define N 1000
using namespace std;
// https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/2/ALDS1_2_B
// void selectionSort();
// void out();

// int n, a[N];

int main()
{
  int n;
  cin >> n;
  int count = 0;
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
        // count++;
        min_idx_temp = j;
      }
    }
    if (i != min_idx_temp) {
        int temp = a[i];
        a[i] = a[min_idx_temp];
        a[min_idx_temp] = temp;
        int o = 3;
        count ++;
      }
  }

  for (int i = 0; i < n; i++)
  {
    if (i)
      cout << ' ';
    cout << a[i];
  }
  cout << endl << count << endl;
  return 0;
}