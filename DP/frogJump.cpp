// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

//  solve the similar problem for k steps

int helper(int n, vector<int> &arr, vector<int> &dp)
{
    if (n == 0)return 0;
    if (n == 1)return dp[1] = abs(arr[0] - arr[1]);

    if (dp[n] != -1)return dp[n];

    int left = helper(n - 1, arr, dp) + abs(arr[n] - arr[n - 1]);
    int right = helper(n - 2, arr, dp) + abs(arr[n] - arr[n - 2]);

    dp[n] = min(left, right);

    return dp[n];
}

int frogJump(int n, vector<int> &arr)
{
    // Write your code here.
    vector<int> dp(n + 1, -1);
    return helper(n - 1, arr, dp);
}

int main()
{
}