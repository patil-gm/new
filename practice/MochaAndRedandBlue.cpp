/*
There are 𝑛 squares arranged in a row, and each of them can be painted either red or blue.
Among these squares, some of them have been painted already, and the others are blank. 
You can decide which color to paint on each blank square.
Some pairs of adjacent squares may have the same color, which is imperfect. 
We define the imperfectness as the number of pairs of adjacent squares that share the same color.

For example, the imperfectness of "BRRRBBR" is 3, with "BB" occurred once and "RR" occurred twice.
Your goal is to minimize the imperfectness and print out the colors of the squares after painting.

TESTCASES :
5
7
?R???BR
7
???R???
1
?
1
B
10
?R??RB??B?

OUTPUT : 
BRRBRBR
BRBRBRB
B
B
BRRBRBBRBR
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
   vector<char> arr;
   char prev='0';
   int cnt=0;
   bool que=1;
   loop(i,0,n){
    char ch;
    cin>>ch;
    if(ch!='?')que=0;
    arr.pb(ch);
   }
   if(que){
    loop(i,0,n){
        arr[i]='B';
        if(i+1<n)arr[i+1]='R';
        i++;
    }
   }
   loop(i,0,n-1){
    if(arr[i]=='B' && arr[i+1]=='?'){
        arr[i+1]='R';
    }
    if(arr[i]=='R' && arr[i+1]=='?'){
        arr[i+1]='B';
    }
   }
   
    rloop(i,n-1,1){
    if(arr[i]=='B' && arr[i-1]=='?'){
        arr[i-1]='R';
    }
    if(arr[i]=='R' && arr[i-1]=='?'){
        arr[i-1]='B';
    }
   }
   
   loop(i,0,n){
    cout<<arr[i];
   }
   cout<<endl;
};

signed main(){
    fastio
    ll t=1;
cin>>t;
while(t--)solve();
    return 0;
}