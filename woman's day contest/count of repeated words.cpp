//count of repeated words
//if no repeated words are there then print -1
#include <iostream>
#include<map>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int i,c=0;
		string s[n];
		map<string,int>mp;
		for(i=0;i<n;i++){
			
			cin>>s[i];
			mp[s[i]]++;
			
		}
		for(auto it:mp){
			if(it.second>=2)
			c++;
		}
		cout<<c<<endl;
	}
 }

output
1
5
hi hello bye hi hello
hi hello