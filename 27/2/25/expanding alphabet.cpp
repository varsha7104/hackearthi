/*expanding alphabet
expand the initial string a till length is atleast k print s[k] append next character in a cyclic way
s="a"
k=5
1<5
new="b"
s="ab"
2<5
new="bc"
s="abbc"
4<5
new="bccd"
s="abbcbccd"
8<5 false so it prints b*/
#include <iostream>
using namespace std;
string stringden(string s){
	int i;
	string temp="";
	for(i=0;i<s.length();i++){
		temp+=(s[i]+1<='z')?s[i]+1:'a';
	}

	return temp;
}
int main(){
	string s="a",newstr="";
	int k;
	cin>>k;
	while(s.length()<k){
		newstr=stringden(s);
		s+=newstr;
		newstr="";
	}
	cout<<s[k-1];

}