/*Binary Search :To implement binary search so to see wheter the target exists in the array*/

#include <iostream>
using namespace std;
int main() {
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++) cin>>a[i];
       int l=0,h=n-1;
       int target;
       cout<<"Enter your target\n";
       cin>>target;
       int ans=-1;
       while(l<=h){
           int m=(l+h)/2;
           if(a[m]==target) {ans=m;break;}
           else if(a[m]<target)l=m+1;
           else h=m-1;
       }cout<<ans<<endl;
   }
    return 0;
}
/*OUTPUT:

2
5
1 3 5 6 7
Enter your target
7
4
4
1 2 3 4
Enter your target
5
-1
*/