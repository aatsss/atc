#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

const int MAX = 200100;
const int MOD = 1000000007;

vector<bool> used;
vector<int> e[MAX];
int t[MAX];

ll ans = 0;

void dfs(int n){
    used[n] = true;
    ans += t[n];
  	
    for (auto next: e[n]){
        if(used[next]) continue;
        dfs(next);
    }
}

int main(){
    int N,K,tt; cin >> N;
    used.assign(N,false);

    rep(i,N){
        cin >> t[i];
        cin >> K;
        rep(j,K){
            int x;
            cin >> x;
            e[i].push_back(x-1);
        }
    }
    dfs(N-1);
    cout << ans << endl;
}

