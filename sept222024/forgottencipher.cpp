/*Forgotten Cipher
In an ancient library, you discover a cipher that is encrypted by shifting each 
character in a word based on its position The first character shifts by 1, the second by 2,
 and so on. now it is your duty to Decode the cipher to reveal the hidden messages.
Given a string of lowercase letters, shift each character back by its position (1-based). 
If the shift results in a character before 'a', wrap around to 'z'
Input Format First line contains size of the string Secod line

contains string to be decoded

Input: "bcd"

s*/
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
  string s;
  cin>>s;
  int i;
  for(i=0;i<s.length();i++){
      s[i]=s[i]-(i+1);
      if(s[i]<'a')
      s[i]='z';
  }
  cout<<s;
    return 0;
}
/*OUTPUT:

abcde
zzzzz
*/