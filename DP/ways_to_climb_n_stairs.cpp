#include<iostream>
#include<vector>
using namespace std;

// #include <bits/stdc++.h>
const int32_t mod=1e9+7;

int helper(int n,vector<int> &dp){
    if(n==0)return 1;
    if(n==1)return 1;
    if(dp[n]!=-1)return dp[n];
    int left=helper(n-1,dp);
    int right=helper(n-2,dp);
    dp[n]=(left+right)%mod;
    return dp[n];
}

int countDistinctWays(int n) {
    //  Write your code here.
    vector<int> dp(n+1,-1);
    return helper(n,dp);
}

int main(){


}



