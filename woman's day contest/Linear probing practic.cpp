Linear probing practic
#include <iostream>
using namespace std;
int main() {
    
int n,i,x,c=0;
cout<<"enter number of buckets\n";
cin>>n;
int a[n];
for(i=0;i<n;i++){
    a[i]=-1;
}
while(c<n){
    cout<<"enter value to store\n";
    cin>>x;
    i=0;
    while(a[(x+i)%n]!=-1&&c<n){
        if(i<n-1)
        i++;
        else
        i=0;
    }
    a[(x+i)%n]=x;
    cout<<"stored\n";
    c++;

if(c==n){
cout<<"filled cant take any input\n";
break;
}}
cout<<"final output is\n";
for(i=0;i<n;i++){
    cout<<a[i]<<" ";
}
    return 0;
}
output
enter number of buckets

5

enter value to store

10

stored

enter value to store

20

stored

enter value to store

30

stored

enter value to store

40

stored

enter value to store

50

stored

filled cant take any input

final output is

10 20 30 40 50 