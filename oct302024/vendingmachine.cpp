/*Uday is Coming from the USA to India to attend his friend's marriage. 
He has 'N' friends and each friend has given him a single box.
 Each box contains 'K' gifts. Uday took all the N boxes and reached the airport. 
 The airport authority told Uday that only one box is allowed for each person.
  So, uday has to combine all the 'N' boxes into one. 
  In the airport there is a Vending machine near to him that takes two boxes at a time and 
  combines a single box. The vending machine will take two boxes and combine all the items 
  and place them in a single box. 
  The cost of combining two boxes is equivalent to the sum of items in the two boxes.
   Find out the leasepossibility of cost of Combining all Boxes.

Example: if box1, box2, and box3 contain 6, 2,3 items first box2 and box3 is
 combined form a box4(containing 5 items), cost of combining is 5 dollars then box1 and box4 is combined to form a box5(containing 11 items), cost of combining is 11 dollarsthe total cost of combining is 16 dollars*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      vector<int> a(n);
      for(int i=0;i<n;i++){
          cin>>a[i];
      }priority_queue<int,vector<int>,greater<int>>pq(a.begin(),a.end());
      int  s=0;
      while(!pq.empty()){
          int a=pq.top();
          pq.pop();
          int b=pq.top();
          pq.pop(); s+=a+b;
          if(pq.empty()) break;
          pq.push(a+b);
      }
      cout<<s<<endl;
      
  }
    return 0;
}/*
Output:
2
3
6 2 3
answer is 16
4
1 2 3 4 
answer is 19

*/