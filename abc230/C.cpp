#include <bits/stdc++.h>
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define repi(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
using namespace std;


const int MAX = 500000;
const int MOD = 1000000007;

int main()
{
    ll N,A,B; cin >> N >> A >> B;
    ll P,Q,R,S; cin >> P >> Q >> R >> S;

    ll weight = S-R+1;
    ll height = Q-P+1;

    vector<string> vec;
    rep(i,height){
        string str = "";
        rep(j,weight){
            str += '.';
        }
        vec.push_back(str); 
    }

    ll l = max(P-A,R-B);
    ll r = min(Q-A,S-B);
    // cout << l << r << endl;
    repi(i,l,r+1){
        vec[i+A-P][i+B-R] = '#';
    }

    ll x = max(P-A,B-S);
    ll y = min(Q-A,B-R);
    // cout << x << y << endl;
    repi(i,x,y+1){
        vec[i+A-P][B-i-R] = '#';
    }

    rep(i,height){
        cout << vec[i] << endl;
    }

}