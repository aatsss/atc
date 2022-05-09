#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

const int MAX = 1 << 18 ;
const int INF = (1 << 29);
const int MOD = 1000000007;

ll func(ll a, ll b){
    return a*a*a + a*a*b + a*b*b + b*b*b;
}

int main()
{
    ll N; cin >> N;
    ll x=8e18;
    ll j = 1000000;
    for(ll i = 0; i < 1000000 ; i++){
        while(func(i,j)>=N && j>=0){
            x = min(x,func(i,j));
            j--;
        }
    }

    cout << x  << endl;
    return 0;
}