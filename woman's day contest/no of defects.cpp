//no of defects
a string s is transferred to the string t find the number of mismatches with the string t.
#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		string s,t;
		cin>>s>>t;
		int i,c=0;
		for(i=0;i<s.length();i++){
			if(s[i]!=t[i])
			c++;
		}
		cout<<c<<endl;
	}
}
output
1
varsha
barsha
1