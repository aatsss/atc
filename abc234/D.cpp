#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

const int MAX = 1 << 18 ;
const int INF = (1 << 29);
const int MOD = 1000000007;

int main()
{
    ll N,K; cin >> N >> K;
    vector<ll> is_there;
    rep(i,N+1){
        is_there.push_back(1);
    }
    vector<ll> vec;
    rep(i,N){
        ll tmp; cin >> tmp;
        vec.push_back(tmp);
    }

    ll candidate;
    vector<ll> init;

    candidate = N-K+1;
    for(int i=N-1;i>=K;i--){
        init.push_back(candidate);
        is_there[vec[i]] = 0;
        if(candidate > vec[i]){
            for(int j=candidate;j<=N;j++){
                if(is_there[j]==1){
                    candidate = j;
                    break;
                }
            }
        }else{
            
        }

    }
    cout << candidate << endl;
    repi(i,K,N){
            init.push_back(vec[i]);
            sort(init.rbegin(),init.rend());
            cout << init[K-1] << endl;
    }
    return 0;
}