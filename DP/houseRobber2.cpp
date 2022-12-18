// #include <bits/stdc++.h> 
#include<iostream>
#include<vector>
using namespace std;

// there are two possibilities due to circular arrangement 
//  1.taking first house and droping last one
//  2.taking last house and dropping the first one

// same space optimized code of previous problem (HouseRobber || maxSumNonAdjustmentElements)

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


long long int houseRobber(vector<int>&house)
{
    // Write your code here.
     int n=house.size();
    if(n==1)return house[0];
    vector<int> temp1,temp2;
    for(int i=0;i<n;i++){
        if(i!=0)temp1.push_back(house[i]);
        if(i!=n-1)temp2.push_back(house[i]);
    }
    long long int ans1=solve(temp1);
    long long int ans2=solve(temp2);
    return max(ans1,ans2);
}