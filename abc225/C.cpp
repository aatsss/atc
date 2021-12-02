#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1000000007;
#define INF 1LL<<30
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(x) (x).begin(),(x).end()
 
int main(){
    int n,m;
    cin>>n>>m;
    int b[n][m];
    rep(i,n) rep(j,m) cin>>b[i][j];
 
    bool ok=true;
    rep(i,n){
        rep(j,m){
            if(j==6 && b[i][j]%7!=0) ok=false;
            else if(j!=m-1 && b[i][j]%7==0) ok=false;
            else if(i!=0 && b[i][j]!=b[i-1][j]+7) ok=false;
            else if(j!=0 && b[i][j]!=b[i][j-1]+1) ok=false;
        }
    }
 
    if(ok) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}