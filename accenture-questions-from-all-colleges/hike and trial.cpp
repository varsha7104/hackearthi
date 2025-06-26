// hike and trial
find the peak element which is greater than both of previous and next element
#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    // Write C++ code here
int n;
cin>>n;
int a[n],i;
for(i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
cout<<a[n-1];

    return 0;
}
output
4
1 2 7 5
7