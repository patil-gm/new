    #include<iostream>
    #include<vector>
    using namespace std;

// we wants to find min steps
int demo(int idx,vector<int> arr){
    if(idx>=arr.size()-1)return 0;
    int ans=INT_MAX;
    for(int i=idx+1;i<idx+arr[idx];i++){
        int temp=1+demo(i,arr);
        ans=min(temp,ans);
    }

    return ans;
}


    int helper(vector<int>& arr,int idx,vector<int>& dp){
        if(idx>=arr.size()-1)return 0;
        if(dp[idx]!=-1)return dp[idx];
        int minjmp = INT_MAX-1;
        for(int i=idx+1;i<=idx+arr[idx];i++){
            minjmp = min(minjmp,(1+helper(arr,i,dp)));
        }
        return dp[idx]=minjmp;
    }

    int jump(vector<int>& arr) {
        int n=arr.size();
            vector<int> dp(n,-1);
           int ans= helper(arr,0,dp);
            return ans;    
    }


    