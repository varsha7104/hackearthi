inal number
You are given a number using the digits in the number output the difference between the maximum and the minimum numbers
#include <stdio.h>

int main() {
    // Write C code here
   long long int x,mini=0,maxi=0;
   int a[100],i=0;
   scanf("%lld",&x);
   while(x){
       a[i]=x%10;
       i++;
       x/=10;
   }
   int n=i,j,temp;
   for(i=0;i<n;i++){
       for(j=i+1;j<n;j++){
           if(a[i]>a[j]){
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }
   }
   for(i=0;i<n;i++){
       mini=mini*10+a[i];
   }
   for(i=n-1;i>=0;i--){
       maxi=maxi*10+a[i];
   }
   printf("%lld",maxi-mini);

    return 0;
}
output 
1234 
3087