/* EFFICIENT ASSISTANT
In the bustling city, Efficient Assistant is responsible for organizing
 meetings for the city's officials. Each official has multiple meetings scheduled,
  but some meetings overlap, which causes confusion and delays. Efficient Assistant's task 
  is to determine the minimum number of meetings that need to be removed to ensure that no
   meetings overlap.
Each test case represents a different schedule of meetings for an official, and your job is to 
help the Efficient Assistant find the optimal solution for each scenario

Please note. If a meeting is from 1 to 3, and another meeting is from 3-4, it is considered 
as a non overlapping meeting
If a meeting is from 1-3 and another meeting is from 2-4, them these two are considered to be
*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
static bool cmp(pair<int,int >&a,pair<int,int>&b){
    return a.second>b.second;
}
int mini(vector<pair<int,int>>a){
    if(a.size()==0)return 0;
    sort(a.begin(),a.end());
    int c=1;
    int l=a[0].second;
    for(int i=1;i<a.size();i++){
        if(a[i].first>=l){
            c++;
            l=a[i].second;
        }
    }return a.size()-c;
}
int main()
{int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n;
 std::vector<pair<int,int>>a(n) ;
 for(int i=0;i<n;i++){
     cin>>a[i].first>>a[i].second;
 }cout<<"OUTPUT\n"<<mini(a)<<endl;
}
    return 0;
}/*OUTPUT:

1
3
1 3
2 4
3 5
OUTPUT:
1
*/