#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

const int MAX = 1 << 18 ;
const int INF = (1 << 29);
const int MOD = 1000000007;

ll n,x,y; 

ll calc(vector<ll> B){
    ll len = B.size(), i = 0, j = 0, countX = 0, countY = 0, res = 0;
    while (i != len) {
        while (j != len && (countX == 0 || countY == 0)) {
            if (B[j] == x) countX++;
            if (B[j] == y) countY++;
            j++;
        }
        if(countX > 0 && countY > 0) res += len + 1ll - j;
        if (B[i] == x) countX--;
        if (B[i] == y) countY--;
        i++;

    }
    return res;
}

int main()
{
    cin >> n >> x >> y;
    ll A[n+1];
    rep(i,n) cin >> A[i];

    ll i= 0,ans = 0;

    while (i != n){
        vector<ll> B;
        while (i != n && (y <= A[i] && A[i] <= x)) {
            B.push_back(A[i]);
            i++;
        }
        if (B.size() != 0) ans += calc(B);
        else i++;
    }
    
    cout << ans << endl;
    
    return 0;
}