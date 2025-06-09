/*Wizard Portion
- Problem: Given an initial amount of a herbs and 'n' hours, calculate the total amount of 
herbs required after 'n' hours.

- Input: Two integers 'a (initial amount of herbs) and 'n (number of hours).needed.

A wizard is brewing a potion and needs a specific amount of magical herbs. 
The amount of herbs required for the potion doubles every hour. You have to 
calculate how much herbs are needed after a given number of hours.*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--){
   long long int n,m;
   cin>>n>>m;
   for(int i=1;i<=m;i++) n*=2;
   cout<<n<<endl;
}}
/*Output:
7 3
56
*/