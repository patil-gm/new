//patil_gm
#include<map>
#include<vector>
#include<cmath>
#include<queue>
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

bool isValid(int i, int j, int n, vector<vector<bool> >&visited){
        if(i>=0 && i<n && j>=0 && j<n && visited[i][j] == false){
            return true;
        }
        return false;
   }

int solve(pair<int, int> pos, pair<int, int> dest, int size){ 
    int x1=pos.first,y1=pos.second;
    int tx = dest.first,ty = dest.second;
     int n = size;
        
        if(x1 == tx && y1 == ty) return 0;
        
        vector<vector<bool> >visited(n, vector<bool>(n, false));
        
        queue<pair<int, int> >q;
        q.push({x1, y1});
        visited[x1][y1] = true;
        
        int ans = 0;

        while(!q.empty()){
            
            int size = q.size();
            ans++;
            while(size != 0){
                pair<int,int>p = q.front();
                q.pop();
                
                int xx = p.first;
                int yy = p.second;
                
                int ax[8] = {1, 1, -1, -1, 2, -2, 2, -2};
                int ay[8] = {2, -2, 2, -2, 1, 1, -1, -1};
                
                for(int i=0; i<8; i++){
                    int nx = xx + ax[i];
                    int ny = yy + ay[i];
                    
                    if(nx == tx && ny == ty) return ans;
                    
                    if(isValid(nx, ny, n, visited)){
                        visited[nx][ny] = true;
                        q.push({nx, ny});
                    }
                }
               
                size--;
            }
        }
        
        
        return ans;
    
}


int minSteps(pair<int, int> pos, pair<int, int> dest, int size) {
     pos.first--;dest.first--;
    pos.second--;dest.second--;

    return solve(pos,dest,size);
    
}


void solve(){
   ll x,y,p,q,n;
   cin>>n>>x>>y>>p>>q;
   pair<int,int> a,b;
   a.fr=x;a.sc=y;b.fr=p;b.sc=q;
   cout<<minSteps(a,b,n)<<endl;
};

signed main(){
    fastio
    ll t=1;
// cin>>t;
while(t--)solve();
    return 0;
}


bool valid(int x,int y,int size,vector<vector<bool> >& visited){
    if(x>=0 && x<size && y>=0 && y<size && visited[x][y]==true)return true;

    return false;
}
int solve1(pair<int, int> pos, pair<int, int> dest, int size){
    int x1=pos.fr-1,y1=pos.sc-1;
    int tx=dest.fr-1,ty=dest.sc-1;
    if(x1==tx && y1==ty)return 0;

    vector<vector<bool> > visited(size,vector<bool>(size,false));
    queue<pair<int,int> > q;
    q.push({x1,y1});
    visited[x1][y1]=true;
    int ans=0;

    while(!q.empty()){
        ans++;
        int n=q.size();
        while(n!=0){
            pair<int,int> temp=q.front();
            q.pop();
            int xx=temp.fr,yy=temp.sc;

            int ax[8]={1,1,-1,-1,2,-2,2,-2};
            int ay[8]={2,-2,2,-2,1,1,-1,-1};

            for(int i=0;i<8;i++){
                int nx=xx-ax[i];
                int ny=yy-ay[i];

                if(valid(nx,ny,size,visited)){
                    q.push({nx,ny});
                    visited[nx][ny]=true;
                }
                
            }
            n--;
        }

    }


}