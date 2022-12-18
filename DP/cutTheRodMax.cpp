// #include<bits/stdc++.h>
#include<istream>
#include<vector>
#include<limits.h>
using namespace std;

int solve(int ammount, vector<int> &coins, vector<int> &dp)
{
    if (ammount == 0) return 0;
    if (ammount < 0) return INT_MIN;
    int maxi = INT_MIN;
    if (dp[ammount] != -1) return dp[ammount];
    for (int i = 0; i < coins.size(); i++)
    {
        int ans = solve(ammount - coins[i], coins, dp);
        if (ans != INT_MIN)
            maxi = max(1 + ans, maxi);
    }
    return dp[ammount] = maxi;
}

int cutSegments(int n, int x, int y, int z) {
	// Write your code here.
    vector<int> v(3);
    v[0]=x;v[1]=y;v[2]=z;
    vector<int> dp(n+1,-1);
   int ans=solve(n,v,dp);
    if(ans==INT_MIN)return 0;
    return ans;
}

int helper(int amt,vector<int> &arr){
    if(amt<0)return INT_MIN;
    if(amt==0)return 0;
    int ans=INT_MIN;
    
    for(int i=0;i<arr.size();i++){
        int include=1+helper(amt-arr[i],arr);
        ans=max(include,ans);
    }
    return ans;
}