#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

const int MAX = 1 << 18 ;
const int INF = (1 << 29);
const int MOD = 1000000007;

ll N,X;
ll cnt = 0;
vector<vector<ll>> a;

void recursive(ll i,ll seki){
    if(i == N){
        if(seki == X) cnt++;
        return ;
    }
    for(ll pos_value:a[i]){
        // seki = seki*pos_value;
        if(seki > X/pos_value) continue;
        recursive(i+1,seki*pos_value);
    }
}

int main()
{
    cin >> N >> X;
    a.resize(N);
    for(ll i = 0;i < N; i++){
        ll l;cin >> l;
        a[i].resize(l);
        for(ll j=0;j < l;j++){
            cin >> a[i][j];
        }
    }
    recursive(0,1);
    cout << cnt << endl;

    return 0;
}