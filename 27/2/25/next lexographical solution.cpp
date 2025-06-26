//next lexographical solution
#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	next_permutation(a,a+n);
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
/*
output
3
1 2 3
1 3 2
*/