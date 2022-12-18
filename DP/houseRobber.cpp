// #include <bits/stdc++.h> 
#include<iostream>
#include<vector>
using namespace std;


// ********************** recursion **********************

int helper(int idx,vector<int> &nums,vector<int> &dp){
    if(idx==0)return nums[idx];
    if(idx<0)return 0;
    
    if(dp[idx]!=-1)return dp[idx];
    int pick=helper(idx-2,nums,dp)+nums[idx];
    int notpick=helper(idx-1,nums,dp);
    
    return dp[idx]=max(pick,notpick);
}
int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    int n=nums.size();
    vector<int> dp(n,-1);
    return helper(n-1,nums,dp);
}


// *********** tabulation *******************

int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    int n=nums.size();
    vector<int> dp(n,-1);
    dp[0]=nums[0];
    dp[1]=max(nums[0],nums[1]);
    
    for(int i=2;i<n;i++){
        int include=nums[i]+dp[i-2];
        int notinclude=dp[i-1];
        dp[i]=max(include,notinclude);
    }
    
    return dp[n-1];
}

// ******************* space optimized tabulation code *******************

long long int solve (vector <int>&nums) 
{
   long long int n = nums.size() ;  
   long long int prev2 = 0 ;
   long long int prev1 = nums[0] ;
   
   for ( int i = 1 ; i < n ; i++)
   {
       long long int incl = prev2 + nums[i] ;
       long long int excl = prev1 + 0 ;

        long long int ans = max (incl , excl) ;
        prev2 = prev1 ; 
        prev1 = ans ; 
   }
       return prev1 ;  
}
