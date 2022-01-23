#include <bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (long long)(n); i++)
#define repi(i, a, b) for (long long i = (long long)(a); i < (long long)(b); i++)
using namespace std;
typedef long long ll;

const int MAX = 1 << 18 ;
const int INF = (1 << 29);
const int MOD = 1000000007;

int main()
{
    int N; cin >> N;
    vector<vector<ll>> a(2*N,vector<ll>(2*N));
    rep(i,2*N){
        rep(j,2*N-i-1){
            ll num; cin >> num;
            a[i].push_back(num);
        }
    }

    


    return 0;

}