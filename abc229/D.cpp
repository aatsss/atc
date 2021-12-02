#include <bits/stdc++.h>
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define repi(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
using namespace std;


const int MAX = 500000;
const int MOD = 1000000007;

int main(){
    string S; cin >> S;
    ll K; cin >> K;
    ll N; N = S.size();

    //累積和
    vector<ll> cnt(N+1);
    cnt[0] = 0;
    rep(i,N){
        if(S[i] == '.'){
            cnt[i+1] = cnt[i] + 1;
        }
        else{
            cnt[i+1] = cnt[i];
        }
    }

    //尺取り法
    ll right = 0;
    ll ans = 0;
    rep(left,N){
        while((cnt[right+1] - cnt[left] <= K) && right+1 <= N){
            right++;
        }
        ans = max(ans,right-left);
    }

    cout << ans << endl;

}