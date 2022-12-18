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
   ll sum=accumulate(all(arr),0);
   ll num1=(sum/n)+1;
   vector<ll> ans;
   ll rem=sum%n;
   loop(i,0,rem){
    ans.push_back(num1);
   }
   rem=n-rem;
   loop(i,0,rem){
    ans.push_back(num1-1);
   }
    ll op=0;
   loop(i,0,n){
    loop(j,i+1,n){
        op+=abs(ans[i]-ans[j]);
    }
   } 
   cout<<op<<endl;
};

signed main(){
    fastio
    ll t=1;
cin>>t;
while(t--)solve();
    return 0;
}