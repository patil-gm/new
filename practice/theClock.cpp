//patil_gm
#include<map>
#include<vector>
#include<cmath>
#include<numeric>
#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<string>
#include <sstream>
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
int good[16] = {0, 70, 140, 210, 280, 350, 601, 671, 741, 811, 881, 951, 1202, 1272, 1342, 1412};
void solve(){
   string time;cin>>time;
   int x;cin>>x;
    string s1=time.substr(0,2);
    string s2=time.substr(3,2);
    // cout<<s1<<" "<<s2<<endl;
   int hr=stoi(s1);
   int min=stoi(s2);
   int n=1440/x;
   int tot_min=hr*60+min;
   int cnt=0;
   loop(i,0,n){
        tot_min+=x;
        hr=(tot_min/60)%24;
        min=tot_min%60;
        string shr=to_string(hr);
        reverse(shr.begin(),shr.end());
        string smin=to_string(min);
        if(hr<10){
            shr+="0";
        }
        if(min<10){
            string temp="0"+smin;
            smin=temp;
        }
        if(smin==shr){
            // cout<<shr<<":"<<smin<<endl;
            cnt++;
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