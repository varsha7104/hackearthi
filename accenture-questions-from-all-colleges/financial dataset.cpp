//print the count of the negative growth ie count of the negative nos
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
   int n,c=0;
   cin>>n;
   int a[n],i;
   for(i=0;i<n;i++){
       cin>>a[i];
       if(a[i]<0)
       c++;
   }
   cout<<c;
    return 0;
}
/*
output
3
-9 8 7
1*/