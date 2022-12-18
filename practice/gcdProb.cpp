/*
Given a positive integer 𝑛. Find three distinct positive integers 𝑎, 𝑏, 𝑐 
such that 𝑎+𝑏+𝑐=𝑛 and gcd(𝑎,𝑏)=𝑐, where gcd(𝑥,𝑦) denotes the greatest common divisor (GCD) of integers 𝑥 and 𝑦.
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
   if(n%2==0){
    n=n-1;
    cout<<n/2<<" "<<n/2+1<<" "<<1<<endl;
   }
   else{
    n=n-1;
    if((n/2)%2==1)cout<<(n/2)-2<<" "<<(n/2)+2<<" "<<1<<endl;
    else{
        cout<<(n/2)-1<<" "<<(n/2)+1<<" "<<1<<endl;
    }
    
   }
};

signed main(){
    fastio
    ll t=1;
cin>>t;
while(t--)solve();
    return 0;
}