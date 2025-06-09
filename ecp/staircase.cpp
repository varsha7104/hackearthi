/*
An array is given as input arrange them in non increasing order .
 Balu went up to all the floors in array now there is no power so he has to climb the
  floors down through steps arrange in such a way*/
  #include <iostream>
#include<algorithm>
using namespace std;
int main() {
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       int a[n],k=0;
       for(int i=0;i<n;i++) cin>>a[i];
      sort(a,a+n,greater<int>());
      for(int i=1;i<=2*n-1;i++){
          for(int j=1;j<=2*n-1;j++){
              if(i==j){
              if(i%2){
                  cout<<a[k];
                  k++;
              }else cout<<"|";
          }else cout<<" ";
      }cout<<endl;
   }}
    return 0;
}
/*OUTPUT:
1
5
5 4 3 2 1
5        
 |       
  4      
   |     
    3    
     |   
      2  
       | 
        1
*/