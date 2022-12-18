// #include <bits/stdc++.h> 
#include<iostream>
#include<vector>
using namespace std;

int solve(int idx,vector<int>&weight,vector<int>&value,int capacity,vector<vector<int>> &dp){
    if(idx==0){
        if(weight[0]<=capacity)return value[0];
        else return 0;
    }
    if(dp[idx][capacity]!=-1)return dp[idx][capacity];
    int include=0;
    if(capacity>=weight[idx])include=value[idx]+solve(idx-1,weight,value,capacity-weight[idx],dp);
    
    int exclude = solve(idx-1,weight,value,capacity,dp);
    return dp[idx][capacity]= max(include,exclude);
}



int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	// Write your code here
    vector<vector<int>> dp(n,vector<int>(maxWeight+1,-1));
    return solve(n,weight,value,maxWeight,dp);
}