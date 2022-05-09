#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

const int MAX = 1 << 18 ;
const int INF = (1 << 29);
const int MOD = 1000000007;


/* DP */

int main(){
    int N,K; cin >> N >> K;
    vector<int> A;
    vector<int> B;

    rep(i,N){
        int n; cin >> n;
        A.push_back(n);
    }

    rep(i,N){
        int m; cin >> m;
        B.push_back(m);
    }
    
    vector<int> dp(N,false), ep(N,false);

    dp[0] = true;
    ep[0] = true;

    rep(i,N-1){
        if(dp[i]){
            if(abs(A[i+1]-A[i]) <= K) dp[i+1]=true;
            if(abs(B[i+1]-A[i]) <= K) ep[i+1]=true;
        }
        if(ep[i]){
            if(abs(A[i+1]-B[i]) <= K) dp[i+1]=true;
            if(abs(B[i+1]-B[i]) <= K) ep[i+1]=true;
        }
    }

    if(dp[N-1] || ep[N-1]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}