//print the highest second score
#include <iostream>
#include<algorithm>
using namespace std;
int main() {
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],i;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		cout<<a[n-2]<<endl;
	}
}
/*output
1
5
8 1 3 6 2
6
*/