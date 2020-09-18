#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--) 
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(),x.end()
#define ar array
#define vt vector
#define sz(x) (int)(x).size()


ll n,m;
bool arr[1001][1001]={};

bool in(ll i,ll j){
    return i>=0 && i<n && j>=0 && j<n;
}
void dfs(ll i,ll j){
    arr[i][j]=0;
    if(in(i-1,j)) dfs(i-1,j);
    if(in(i+1,j)) dfs(i+1,j);
    if(in(i,j-1)) dfs(i,j-1);
    if(in(i,j+1)) dfs(i,j+1);
}
void solve(){  
    cin>>n>>m;
    cout<<n<<m;
    char c;
    rep(i,0,n)
        rep(j,0,m){
            cin>>c;
            if(c=='.') arr[i][j]=1;
            else arr[i][j]=0;
        }
            
    ll ans=0;
    rep(i,0,n){
        rep(j,0,m){
            if(arr[i][j]==1)
                dfs(i,j),ans++;
        }
    }

    cout<<ans<<"\n";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);


    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif
       solve();
 
    //cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}