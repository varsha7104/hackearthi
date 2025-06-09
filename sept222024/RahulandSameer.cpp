/*Rahul and Sameer
Rahul and Sameer are seated next to each other during an exam and hope to share answers. 
However, the exam committee has devised a clever system: there are p different sets of 
questions (numbered from 0 to p-1) that are assigned based on the students' roll numbers.

Each student's roll number is a unique positive integer. The set of questions a student 
receives is determined by the formula:

(roll number 1) % р

Rahul and Sameer can only share answers if they are assigned the same set of questions.

You are provided with Rahul's roll number A and Sameer's roll number B. 
Your task is to find how many different values of p would allow them to get the same set of*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--){
     int n,m;
     cin>>n>>m;
     int d=abs(n-m);
  int c=0;
  for(int i=1;i<=d;i++){
      if(d%i==0) c++;
  }cout<<c<<endl;
}}/*/output:

1 
2 6
3

*/