/*
Solitaire Geme 
You are playing a solitaire game with three piles of stones of sizes a, b, and c respectively.
 Each turn you choose two. different non-empty piles, take one stone from each, and add 1 
 point to your score. The game stops when there are fewer than two non-empty piles 
 (meaning there are no more available moves) Given three integers a, b, and c,
  return the maximum score you can get. 
Input Format: The input contains 3 space-separated integers*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--){
     int a,b,c;
     cin>>a>>b>>c;
     priority_queue<int>pq;
     pq.push(a);
     pq.push(b);
     pq.push(c);int s=0;
     while(true){
         long long int v=pq.top();pq.pop();
         long long int u=pq.top();pq.pop();
         if(v==0) break;
         u--;
         v--;
         s++;
         pq.push(u);
         pq.push(v);
          }cout<<s<<endl;
    return 0;
}}/*Alternative approach*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--){
     int a,b,c;
     cin>>a>>b>>c;
    int s=a+b+c;
    int o=max({a,b,c});
    cout<<min(s-o,s/2)<<endl;
    return 0;
}}

/*Output:
1
2 4 6
6*/