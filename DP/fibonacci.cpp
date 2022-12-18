// patil_gm
#include <map>
#include <vector>
#include <cmath>
#include <numeric>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
#define ll long long

ll fibonacci(ll n, vector<ll> &dp)
{
    if (n == 0)
        return dp[n] = 0;
    if (n == 1)
        return dp[n] = 1;

    if (dp[n] != -1)
        return dp[n];

    return dp[n] = fibonacci(n - 1, dp) + fibonacci(n - 2, dp);
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> dp(n + 1, -1);
    cout << fibonacci(n, dp) << endl;
    //    for(auto it : dp){
    //     cout<<it<<" ";
    //    }
};

// notes :
// 1.try to represent the problem in the terms of the indexes
// 2.Do all the possible stuff on that and according to problem statement
// 3.find all the ways --> sum all the stuff
//   find the minimum  --> min of all them
//   find the max      --> max of all them
