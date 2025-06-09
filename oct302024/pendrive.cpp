/*
Pendrive Choice
A person gives N different kinds of pen dives, Each pen drive cost is pl to pN per item, 
Here, we will choose K different kinds of pen drives and buy one of each chosen kind.
 Print the minimum possible total price of those pen drives

Constraints

1-k<=N<=1000000

1=pi<=10000

Input format
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--){
     int n,m;
     cin>>n>>m;
  int a[n];
  for(int i=0;i<n;i++)cin>>a[i];
  sort(a,a+n);int s=0;
  for(int i=0;i<m;i++)s+=a[i];
  cout<<"Output:\n"<<s<<endl;
}}/*Output:

1
5 3
100 200 50 20 10
Output:
80
*/