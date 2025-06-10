/*Hungry minions love to eat bananas. There are n piles of bananas, and each pile has a 
certain number of bananas. The minions can decide their bananas-per-hour eating speed k.
 Each hour, they choose some pile of bananas and eat k bananas from that pile. If the pile has 
 fewer than k bananas, they eat all of them instead and will not eat any more bananas during
  that hour.
The minions want to finish eating all the bananas before the guards return in h hours.
 Determine the minimum integer k such that the minions can eat all the bananas within h hours.

Input

The first line contains an integer T, the number of test cases

For each test case:

The first line*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int tot(vector<int>a,int k,int h){
    int c=0;
    for(int i=0;i<a.size();i++){
        c+=(a[i]+k-1)/k;
    }return c<=h;
}
int mini(vector<int>a,int k){
    int n=a.size();
    int l=0,h=*max_element(a.begin(),a.end()),ans=-1;
    while(l<=h){
        int m=(l+h)/2;
        if(tot(a,m,k)){ans=m;
            h=m-1;}
        else l=m+1;
    }return ans;
}
int main()
{int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
  std::vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }cout<<"OUTPUT:"<<mini(a,k)<<endl;
}

    return 0;
}
/*OUTPUT:

2
4 8
3 6 7 11
OUTPUT:4
5 6
30 11 23 4 20
OUTPUT:23
*/