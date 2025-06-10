/*Sum of Differences

Lets get straight to question!
You will be given an array a of size n You have to generate output array b of size n 
where b[i] = (a[i]-a[i-1])+ (a[i]-a[i-2]) +(a[i]-a[1-3]) till the a[i-k], where (i-k)>=0.
Input Format
First line contains T> no of test cases.
Next T lines contains N represents length of array.
followed by N space separated integers in new line*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n;
  std::vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
   
    }
    long long p=0;
    for(int i=0;i<n;i++){
        if(i==0) b[i]=0;
        else b[i]=i*a[i]-p;
        p+=a[i];
    }cout<<"OUTPUT\n";
    for(int i=0;i<n;i++) cout<<b[i]<<" ";
    cout<<endl;
}

    return 0;
}/*OUTPUT:

2
4
1 2 3 4
OUTPUT
0 1 3 6 
3
5 10 15
OUTPUT
0 5 15 
*/