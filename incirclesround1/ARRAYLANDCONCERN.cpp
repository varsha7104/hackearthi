/*
In the kingdom of Arrayland, the Royal Mathematician has been given an important task by the king. The task is to find the 
maximum product that can be obtained from any subset of elements within 
a given array of integers. This array can contain positive numbers, negative numbers, 
and zeros The king's mathematician needs your help to solve this problem for multiple 
test cases.

Each test case represents a different scenario the Royal Mathematician 
needs to solve, and your job is to help find the solution for each scenario.*/
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    long long int num;
    cin >> num;

    while (num--) {
        long long int n;
        cin >> n;
        vector<long long int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long int p = 1, k = 1;
        long long int res = LLONG_MIN;

        for (int i = 0; i < n; i++) {
            p *= a[i];                // left to right product
            k *= a[n - 1 - i];        // right to left product
            res = max({res, p, k});   // update result
            if (p == 0) p = 1;        // reset on zero
            if (k == 0) k = 1;        // reset on zero
        }

        cout << res << endl;
    }

    return 0;
}
/*/Output:
2
3
-2 0 -1
5
1 -2 -3 0 7
OUTPUT:
0
7
*/
//didnt work in the hackearth need to see better solution