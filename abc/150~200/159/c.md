Lを分割するやり方がわからん。
小数の分割がきつい

x、y,zを同じにすると体積が最大になる。

```c++
#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
#include<string>
#include<iomanip>
using namespace std;
int main(){
   double l;
   cin>>l;
   
   double  ans=0;
   // こんな感じで i+= 0.0001してひたすら足していける。ただこのコードはtle
   for(int i=0;i<l;i=i+0.0001){
      if(ans<(l-i)*(l-i)*i/4){
         ans=(l-i)*(l-i)*i/4;
      }
   }
   cout << fixed<<setprecision(7)<<ans << endl;
}
```