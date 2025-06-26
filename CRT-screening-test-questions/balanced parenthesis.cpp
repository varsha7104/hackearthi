#include <iostream>
#include<stack>
using namespace std;
int main() {
    // Write C++ code here
  string s;
  cin>>s;
  int i;
  stack<char>st;
  for(i=0;i<s.length();i++){
      if(st.empty()==true)
      st.push(s[i]);
      else if((s[i]==')'&&st.top()=='(')||(s[i]==']'&&st.top()=='[')||(s[i]=='}'&&st.top()=='{'))
      st.pop();
      else
      st.push(s[i]);
  }
  if(st.empty()==true)
  cout<<"YES";
  else
  cout<<"NO";

    return 0;
}
output
({})
YES