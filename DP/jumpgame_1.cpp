    #include<iostream>
    #include<vector>
    using namespace std;
    
    bool canJump(vector<int>& arr) {
           int n=arr.size();
           int maxreach=0;
           if(n==1)return true;
           if(arr[0]==0)return false;

           for(int i=0;i<n;i++){
               if(i>maxreach)return false;
               maxreach=max(i+arr[i],maxreach);
           }

           return true;
    }