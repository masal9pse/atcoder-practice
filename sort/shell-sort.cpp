#include <iostream>
#include <iterator>
#include <algorithm>
#include <limits>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void insertionSort();
void out();

int n,a[N];

int main() {

}

void shellSort () {

}

void insertionSort(){
  out();
  for(int i=1;i<n;i++){
    int t=a[i],j=i-1;
    while(j>=0&&a[j]>t){
      a[j+1]=a[j];
      j--;
    }
    a[j+1]=t;
    out();
  }
}

void out(){
  for(int i=0;i<n;i++){
    if(i)cout<<' ';
    cout<<a[i];
  }
  cout<<endl;
}
