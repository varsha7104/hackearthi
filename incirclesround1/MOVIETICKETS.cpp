/*
Movie tickets

In the bustling city of La La Land, the residents have discovered a new way 
to make profits by trading movie tickets. The prices of these tickets vary from day to day,
 and savvy traders can buy tickets on one day and sell them on another for a profit. However,
  each trader is allowed to make at most k transactions, where each transaction consists of
   buying one ticket and selling it on a future day You are given an integer k and an array
    prices where prices[i] is the price of a movie ticket on the i-th day. Your task is to 
    return the maximum profit the residents can achieve with at most k transactions If no
     profit can be made, return 0.

Input

The first line contains an integer T, the number of test cases

For each test case

The first line contains an integer k, the maximum number of transactions*/
#include <iostream>
#include <vector>
using namespace std;

int maxProfit(int k, vector<int>& prices) {
    int n = prices.size();
    if (n == 0 || k == 0) return 0;
if (k >= n / 2) {
        int profit = 0;
        for (int i = 1; i < n; i++) {
            if (prices[i] > prices[i - 1])
                profit += prices[i] - prices[i - 1];
        }
        return profit;
    }

    // dp[t][d] = max profit using at most t transactions until day d
    vector<vector<int>> dp(k + 1, vector<int>(n, 0));

    for (int t = 1; t <= k; t++) {
        int maxDiff = -prices[0]; // max of dp[t-1][d-1] - prices[d-1]
        for (int d = 1; d < n; d++) {
            dp[t][d] = max(dp[t][d - 1], prices[d] + maxDiff);
            maxDiff = max(maxDiff, dp[t - 1][d] - prices[d]);
        }
    }

    return dp[k][n - 1];
}

int main() {
    

    int T;
    cin >> T;
    while (T--) {
        int k, n;
        cin >> k >> n;
        vector<int> prices(n);
        for (int i = 0; i < n; i++) {
            cin >> prices[i];
        }

        cout << maxProfit(k, prices) << "\n";
    }
    return 0;
}
/*OUTPUT:
2
2 6
3 2 6 5 0 3
3 5
1 2 3 4 5
OUTPUT:
7
4
*/