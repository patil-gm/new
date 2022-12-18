// patil_gm
#include <map>
#include <vector>
#include <cmath>
#include <numeric>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

// this code is for maximum element
int demo(int amt,vector<int> &arr){
    if(amt<0)return INT_MIN;
    if(amt==0)return 0;
    int ans=INT_MIN;
    for(auto it:arr){
        int temp=1+demo(amt-it,arr);
        ans=max(temp,ans);
    }
    return ans;
}


int solve(int ammount, vector<int> &coins, vector<int> &dp)
{
    if (ammount == 0) return 0;
    if (ammount < 0) return INT_MAX;
    
    if (dp[ammount] != -1) return dp[ammount];
    int maxi = INT_MIN;
    for (int i = 0; i < coins.size(); i++)
    {
        int ans = solve(ammount - coins[i], coins, dp);
            maxi = max(1 + ans, maxi);
    }
    return dp[ammount] = maxi;
}

int maximumElements(vector<int> &coins, int ammount)
{
    // Write your code here.
    vector<int> dp(ammount + 1, -1);
    int ans = solve(ammount, coins, dp);
    if (ans == INT_MAX)
        return -1;
    return ans;
}