#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

const int MAX = 1 << 18 ;
const int INF = (1 << 29);
const ll MOD = 998244353;

int main()
{   
    ll n; cin >> n;
    ll dp[1048576][10] = {0};
    ll answer = 0;

    // initialize
    for (ll k = 1; k <= 9; k++) dp[1][k] = 1;

    // dp
    for (ll i = 1; i < n; i++) {
        for (ll k = 1; k <= 9; k++) {
            if (k == 1) {
                dp[i+1][k] = dp[i][k] + dp[i][k+1];
            }else if (k == 9) {
                dp[i+1][k] = dp[i][k] + dp[i][k-1];
            }else {
                dp[i+1][k] = dp[i][k] + dp[i][k+1] + dp[i][k-1];
            }
            dp[i+1][k] %= MOD;
        }
    }

    // answer
    for (ll k = 1; k <= 9; k++) {
        answer += dp[n][k];
        answer %= MOD;
    }
    
    cout << answer << endl;
    return 0;
}