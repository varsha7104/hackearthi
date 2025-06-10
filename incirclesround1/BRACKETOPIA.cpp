/*
In the land of Bracketopia, you have been tasked with generating all combinations of well-formed parentheses. You need to find out how many valid combinations can be generated given n pairs of parentheses.

Each test case represents a different number of pairs of parentheses, and your job is to find the number of valid combinations for each scenario.

Definition of Valid Parentheses:

A valid parentheses combination is one where every opening parenthesis (has a corresponding closing parenthesis), and no closing parenthesis) appears before its matching opening parenthesis (. In other words, the parentheses must be properly balanced.

For example:

() is a valid combination.

(00) is a valid combination.*/
#include <iostream>
using namespace std;

int count=0;
int po(int pos,int n,int o,int c){
    if(c==n) count++;
    else{
        if(o>c) po(pos+1,n,o,c+1);
        if(o<n) po(pos+1,n,o+1,c);
    }return count;
}

int main() {
    int num;
    cin >> num;

    while (num--) {
        int n;
        cin >> n;
        int ans = po(0, n, 0, 0);
        cout <<"OUTPUT"<< ans << endl;
        count = 0;  // Reset for the next test case
    }

    return 0;
}
/*
2
1
OUTPUT:1
3
OUTPUT:5
*/