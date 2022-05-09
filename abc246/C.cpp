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
    ll N,K,X; cin >> N >> K >> X;
    vector<ll> A;

    for(ll i=0;i<N;i++){
        ll a;cin >> a;
        A.push_back(a);
    }

    ll sum = 0;
    for(ll i = 0; i < N ; i++){
        sum += A[i];
    }

    ll m=0;
    for(ll i = 0; i < N ; i++){
        m+=A[i]/X; 
    }
    m = min(m,K);
    sum -= m*X;
    K -= m;

    for(ll i = 0; i < N ; i++){
        A[i] = A[i]%X;
    }
    sort(A.rbegin(),A.rend());

    for(ll i = 0; i < N ; i++){
        if(K==0) break;
        sum -= A[i];
        K--;
    }

    cout << sum << endl;
    
    return 0;
}