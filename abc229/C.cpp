#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

const int MAX = 500000;
const int MOD = 1000000007;

int main(){
    ll N,W; cin >> N >> W;
    vector<vector<ll>> cheese;
    rep(i,N){
        vector<ll> vec;
        ll A,B; cin >> A >> B;
        vec.push_back(A);
        vec.push_back(B);
        cheese.push_back(vec);
    }

    //多次元配列のsort
    sort(cheese.begin(),cheese.end(),
        [](const vector<ll> &alpha, const vector<ll> &beta){
            return alpha[0] < beta[0];
        }
    );

    ll ans=0;
    for(int i=N-1;i>=0;i--){
        if(W <= 0) break;
        ll tmp = min(cheese.at(i).at(1),W);
        ans += tmp * cheese.at(i).at(0);
        W -= tmp;
    }

    cout << ans << endl;
}