//N chocolates are present and person can eat only power of 2 chocolates so find the max chocolates that the person can have
#include <iostream>
#include<cmath>
using namespace std;
int main() {
    // Write C++ code here
  int n,i;
  cin>>n;
  int x=floor(sqrt(n));
  i=x;
  while(i>=0)
  {
      if(pow(2,i)>n)
      i--;
      else{
          cout<<pow(2,i);
          break;
      }
  }
  /*
output
64
64

25
1*/