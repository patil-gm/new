/*
The grasshopper is located on the numeric axis at the point with coordinate 𝑥0.

Having nothing else to do he starts jumping between integer points on the axis. 
Making a jump from a point with coordinate 𝑥 with a distance 𝑑 to the left moves the grasshopper to a point with a coordinate 𝑥−𝑑, 
while jumping to the right moves him to a point with a coordinate 𝑥+𝑑.
The grasshopper is very fond of positive integers, so for each integer 𝑖 starting with 1 the following holds: 
exactly 𝑖 minutes after the start he makes a jump with a distance of exactly 𝑖. So, in the first minutes he jumps by 1, 
then by 2, and so on.

The direction of a jump is determined as follows: 
if the point where the grasshopper was before the jump has an even coordinate, 
the grasshopper jumps to the left, otherwise he jumps to the right.

For example, if after 18 consecutive jumps he arrives at the point with a coordinate 7, 
he will jump by a distance of 19 to the right, since 7 is an odd number, 
and will end up at a point 7+19=26. Since 26 is an even number, 
the next jump the grasshopper will make to the left by a distance of 20, and it will move him to the point 26−20=6.

Find exactly which point the grasshopper will be at after exactly 𝑛 jumps.
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
    
   ll x,n;
   cin>>x>>n;
   ll y,z=0;
   y=n%4;
   if(y==1){
    z=-n;
   }
   else if(y==2){
      z=1;
   }
   else if(y==3){
      z=n+1;
   }
   if(x&1){
        cout<<x-z<<endl;
   }
   else cout<<x+z<<endl;
   
};

signed main(){
    fastio
    ll t=1;
cin>>t;
while(t--)solve();
    return 0;
}


// 9
// 0 1
// 0 2
// 10 10
// 10 99
// 177 13
// 10000000000 987654321
// -433494437 87178291199
// 1 0
// -1 1




// Copy
// -1
// 1
// 11
// 110
// 190
// 9012345679
// -87611785637
// 1
// 0