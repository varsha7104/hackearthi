/*if a number contains more ones it should be the first number and if two numbers
 have same number of ones then both the numbers should be arranged in the
  ascending order.*/
  #include <iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
static bool cmp(int x,int y){
  int c=__builtin_popcount(x);
  int d=__builtin_popcount(y);
  if(c==d) return x<y;
  return c<d;
}
int main() {
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       int a[n],b[n];
       for(int i=0;i<n;i++) {cin>>a[i];
      }
      sort(a,a+n,cmp);
       for(int i=0;i<n;i++) cout<<a[i]<<" ";
       cout<<endl;
        
   }
    return 0;
}
/*OUTPUT:

1
5
9 6  10 6 6 6
6 6 6 9 10 
*/