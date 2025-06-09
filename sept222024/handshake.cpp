/*Handshake of the people
There are N people in a meeting. These N people are sitting in a circle. 
Consider that each person has already given a handshake with adjacent members.
 Now every person needs to give a handshake to the remaining people in the meeting as well.
 No two persons shake their hands more than once Find out how many handshakes are still
  required so that no two people must be left out without giving handshakes.

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
  cout<<"Output\n"<<(n*(n-3))/2<<endl;
}}
/*Output:
1
5
Output:5*/