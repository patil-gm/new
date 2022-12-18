//patil_gm
#include<map>
#include<vector>
#include<cmath>
#include<numeric>
#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define itoc(c)  ((char)(((int)'0')+c))
#define ctoi(c)  ((int)(((int)c)-'0'))
#define endl '\n'
#define ll long long
#define lld long long double 
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define rloop(i,a,b) for(ll i=a;i>=b;i--)
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define vec(ver, n)  vector<ll> ver(n); for (ll i = 0; i < n; i++) cin >> ver[i];
#define pii pair<ll,ll>
#define fr first
#define sc second
const long long INF=1e18;
const int32_t mod=1e9+7;
const int32_t MM=998244353;

void solve(){
   int n,a,b;
   cin>>n>>a>>b;
   string arr;
   cin>>arr;
   int temp=arr[0];
   int cnt=1;
   
   loop(i,0,n){
    if(arr[i]!=temp){
        cnt++;
        temp=arr[i];
    }
   }
//    cout<<cnt<<endl;
if(n==1){
    cout<<a+b<<endl;
    return;
}

   if((a<0 && b>=0)|| (a>=0 && b>=0)){
    cout<<(a*n)+(b*n)<<endl;
   }


   if(a<0 && b<0){
    if(cnt==1)cout<<a*n + b<<endl;
    else{
         int mul;
    if(cnt%2){
        mul=(cnt+1)/2;
    }
    else{
        mul=(cnt+2)/2;
    }
      cout<<(a*n)+(b*mul)<<endl;
    }
    return;
   }
   if(a>=0 && b<0){
    int mul;
    if(cnt%2){
        mul=(cnt+1)/2;
    }
    else{
        mul=(cnt+2)/2;
    }
      cout<<(a*n)+(b*mul)<<endl;
   }
};

signed main(){
    fastio
    ll t=1;
cin>>t;
while(t--)solve();
    return 0;
}