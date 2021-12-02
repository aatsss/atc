#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

const int MAX = 200100;
const int MOD = 1000000007;

bool used[MAX];
vector<int> e(MAX);
vector<int> t(N);

ll ans = 0;

void dfs(int n){
    used[n] = true;
    ans += t[n-1];
    for (auto next: e[n]){
        if(used[next]) continue;
        dfs(next);
    }
}

int main(){
    int N,K,tt; cin >> N;
    used.assign(MAX,false);

    rep(i,N){
        cin >> tt;
        t.push_back(tt);
        cin >> K;
        rep(j,K){
            int x;
            cin >> x;
            e[i].push_back(x);
        }
    }
    dfs(N);
    cout << ans << endl;
}
