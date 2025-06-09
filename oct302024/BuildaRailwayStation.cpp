/*
Build a Railway Station
Niha is a computer science student and she has friends in other departments 
in her college. One of her friends, from civil had got a project to build a railway station
 for a city. Niha's friend was so confused to select the number of platforms to 
 build in the railway station. But she had the data on the number of trains that arrive 
 and depart from the station. She came to Niha and asked her help to find the number of 
 platforms required at the railway station.
Input Format
The first line of input consists of a nurfiber of trains.
next N lines contain the arrival time and departure time of
each train
Output Format:

Print the minimum number of platforms required so that no train has to wait for the other
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
  int a[n],d[n];
  for(int i=0;i<n;i++){cin>>a[i];cin>>d[i];}
  
  int p=1,r=1;
  for(int i=0;i<n;i++){p=1;
      for(int j=0;j<n;j++){
          if(i!=j){
              if(a[i]>=a[j]&& d[j]>=a[i])p++;
          }
      }r=max(p,r);
  }cout<<r<<endl;
    return 0;
}}

/*Alternative code*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
  int a[n],d[n];
  for(int i=0;i<n;i++){cin>>a[i];cin>>d[i];}
  
 sort(a,a+n);
 sort(d,d+n);int p=0,maxi=0;
 int i=0,j=0;
 while(i<n &&j<n){
     if(a[i]<=d[j]){
         p++;i++;
         maxi=max(maxi,p);
     }else{
         p--;
         j++;
     }
 }cout<<maxi<<endl;
    return 0;
}}

/*
Output:

1
6
900 910
940 1200
950 1120
 1100 1130
1500 1900
1800 2000
3
*/