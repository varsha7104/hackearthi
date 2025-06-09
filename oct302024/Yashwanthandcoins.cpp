/*
Yashwanth with his coins
Yashwanth was so hungry so he went to KFC to eat,
 while he was eating his mobile suddenly fell down from his hand and broke so, 
 now he cannot pay online. Now he has to pay hand cash He has many 
 2000,500,200,100,50,20,10,5,2,1 coins. He wants to pay the bill with fewer coins.
  So, he is asking for your help to find it
Note He should pay with fewer coins
Input format first line contains I means no. of test cases the second line contains the amount he had to pay
output format print the no of coins

Constraints
1<=1<=10
1<=N<=500000
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
    int d,y=n,s=0;
      vector<int>coins={2000,1000,500,200,100,50,20,10,5,2,1};
      for(int i=0;i<11;i++){
          d=y/coins[i];
        y= ( y>=coins[i])?y-d*coins[i]:y;
          s+=d;
      }cout<<"coins required"<<s<<endl;
      
  }}
  /*Output

5
543
coins required5
34
coins required4
76
coins required4
49
coins required5
89
coins required6

  
  */