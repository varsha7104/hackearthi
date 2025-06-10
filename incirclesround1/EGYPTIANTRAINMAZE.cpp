/*
Egyptian Triangle Maze

You are given a triangle array for each test case. Your task is to return the minimum path 
sum from the top to the bottom of the triangle.

For each step, you may move to an adjacent number of the row below. More formally, if you are 
on index i on the current row, you may move to either index i or index i + 1 on the next row.*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int mini(vector<vector<int>>&tr){
    int n=tr.size();
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<tr[i].size();j++){
            tr[i][j]+=min(tr[i+1][j],tr[i+1][j+1]);
        }
    }return tr[0][0];
}
int main()
{int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n;
  vector<vector<int>>tr(n);
    for(int i=0;i<n;i++){
        tr[i].resize(i+1);
        for(int j=0;j<i+1;j++)cin>>tr[i][j];
    }cout<<mini(tr)<<endl;
 
}
    return 0;
}/*OUTPUT:
*/