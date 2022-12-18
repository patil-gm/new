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
   if(n==1 || n&1){
    cout<<"NO"<<endl;
    return;
   }
    if(n==2 ){
    cout<<"YES"<<endl;
    return;
   }
  ll temp2=sqrt(n/2);

if(temp2*temp2==n/2 && n%2==0){
     cout<<"YES"<<endl;
    return;
}
  temp2=sqrt(n/4);
if(temp2*temp2==n/4 && n%4==0){
     cout<<"YES"<<endl;
    return;
}
cout<<"NO"<<endl;
};
 
signed main(){
    fastio
    ll t=1;
cin>>t;
while(t--)solve();
    return 0;
}