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

int pivotInteger(ll n) {
    vector<int> prsum,posum;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
        prsum.push_back(sum);
    }

    for(int i=1;i<=n;i++){
        posum.push_back(sum);
        sum-=i;
    }

    for(int i=0;i<n;i++){
        if(posum[i]==prsum[i])return i+1;
    }
    return -1;
}

void solve(){
   ll n;
   cin>>n;
    cout<<pivotInteger(n)<<endl;
};

signed main(){
    fastio
    ll t=1;
cin>>t;
while(t--)solve();
    return 0;
}