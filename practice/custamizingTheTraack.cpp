/*
Highway 201 is the most busy street in Rockport. Traffic cars cause a lot of hindrances to races, 
especially when there are a lot of them. The track which passes through this highway can be divided into 𝑛 sub-tracks. 
You are given an array 𝑎 where 𝑎𝑖 represents the number of traffic cars in the 𝑖-th sub-track. 
You define the inconvenience of the track as ∑𝑖=1𝑛∑𝑗=𝑖+1𝑛|𝑎𝑖−𝑎𝑗|, where |𝑥| is the absolute value of 𝑥.

You can perform the following operation any (possibly zero) number of times: 
choose a traffic car and move it from its current sub-track to any other sub-track.

Find the minimum inconvenience you can achieve.
*/

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
   ll n;
   cin>>n;
   vec(arr,n);
   ll sum=0;
   loop(i,0,n){
      sum+=arr[i]%n;
   }

   vector<ll> ans;
   ll rem=sum%n;
   cout<<rem*(n-rem)<<endl;
};

signed main(){
    fastio
    ll t=1;
cin>>t;
while(t--)solve();
    return 0;
}