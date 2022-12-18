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
   ll n,req;cin>>n;cin>>req;
   vec(arr,n);
   bool allone=1;
   int one=0;
   loop(i,0,n){
    if(arr[i]==0)allone=0;
    if(arr[i]==1)one++;
    }


if(one<req){
    cout<<-1<<endl;
    return;
    }
if(one==req){
    cout<<0<<endl;
    return;
}
if(allone){
    cout<<one-req<<endl;
    return;
}

int sum=0,cnt=0,start=0,ans=0;

loop(i,0,n){
    sum+=arr[i];
    cnt++;
    if(sum==req)ans=max(ans,cnt);
    if(sum>req){
        // cout<<"count : "<<cnt-1<<endl;
        while(arr[start]!=1){
            start++;
            cnt--;
        }
        cnt--;
        start++;
        sum--;
        // cout<<"sum : "<<sum<<endl;
    }
}

// we have finded the maximum length of array having sum req
cout<<n-ans<<endl;

};

signed main(){
    fastio
    ll t=1;
cin>>t;
while(t--)solve();
    return 0;
}

