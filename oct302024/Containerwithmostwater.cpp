/*
CONTAINER WITH MOST WATER:

You are given an integer array of size N each denoting height of a vertical tower
. Find two towers that together with the ground form a container, 
such that the container contains the most water.Print the maximum amount of water 
a container can store.

INPUT:

The first line contains T, no of test casesEach test case contains N, no of vertical
 towers Followed by heights of N vertical towers*/
 #include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
  int a[n];
  for(int i=0;i<n;i++)cin>>a[i];
  int area=0,s=0,e=n-1;
  for(int i=0;i<n;i++){
      int u=min(a[s],a[e])*(e-s);
      area=max(area,u);
      if(a[s]<a[e]) s++;
      else e--;
  }cout<<area<<endl;
  }
    return 0;
}/*Output:

1
9
1 8 7 6 2 5 4 8 3 7
49
