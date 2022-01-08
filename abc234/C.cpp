#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

const int MAX = 1 << 18 ;
const int INF = (1 << 29);
const int MOD = 1000000007;


string toBinary(ll n)
{
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? "0" : "2" );
        n /= 2;
    }
    return r;
}


int main()
{
    ll K; cin >> K;
    string S;
    S = toBinary(K);
    string Sr (S.rbegin(),S.rend());
    cout << Sr << endl;

    return 0;
}