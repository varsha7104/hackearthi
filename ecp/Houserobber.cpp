/*
House Robber
A thief wants to rob as maximum as possible . But the condition is that if a house was 
robbed then both left and right neighbours were intimated and they cannot rob in 
those houses find the maximum amount that can be robbed*/
#include <iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int maxi(std::vector<int> a){
    int n=a.size();
    if(n==0)return 0;
    if(n==1)return a[0];int include=a[0];
    int exclude=0;
    for(int i=1;i<n;i++){
        int newinclude=exclude+a[i];
        int newexclude=max(include,exclude);
        include=newinclude;
        exclude=newexclude;
    }return max(include,exclude);
    
}
int main() {
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
    vector<int>a(n);
       for(int i=0;i<n;i++) {cin>>a[i];
      }
    
       cout<<maxi(a)<<endl;
        
   }
    return 0;
}
/*OUTPUT:

1
6
5 3 4 11 2 8
24
*/