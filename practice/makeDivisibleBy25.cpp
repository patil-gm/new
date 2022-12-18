/*

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
   string s;
   cin>>s;
   ll n=s.length();
   ll cnt=n;
   for(ll i=0;i<n;i++){
    for(ll j=i+1;j<n;j++){
        ll num=(s[i]-'0')*10 + (s[j]-'0');
        if(num%25==0){
            cnt=min(cnt,((j-i-1)+(n-1-j)));
        }
    }
   }
   cout<<cnt<<endl;
};

signed main(){
    fastio
    ll t=1;
cin>>t;
while(t--)solve();
    return 0;
}