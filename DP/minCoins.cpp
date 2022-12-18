// patil_gm
#include <map>
#include <vector>
#include <cmath>
#include <numeric>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


// this code is for min element
int demo(int amt,vector<int>& arr){
    if(amt<0)return INT_MAX;
    if(amt==0)return 0;
    int ans = INT_MAX;
    for(auto it:arr){
        int temp=1+demo(amt-it,arr);
        ans=min(temp,ans);
    }
    return ans;
}


int solve(int ammount, vector<int> &coins, vector<int> &dp)
{
    if (ammount == 0) return 0;
    if (ammount < 0) return INT_MAX;
    int mini = INT_MAX;
    if (dp[ammount] != -1) return dp[ammount];
    for (int i = 0; i < coins.size(); i++)
    {
        int ans = solve(ammount - coins[i], coins, dp);
        if (ans != INT_MAX)
            mini = min(1 + ans, mini);
    }
    return dp[ammount] = mini;
}

int minimumElements(vector<int> &coins, int ammount)
{
    // Write your code here.
    vector<int> dp(ammount + 1, -1);
    int ans = solve(ammount, coins, dp);
    if (ans == INT_MAX)
        return -1;
    return ans;
}