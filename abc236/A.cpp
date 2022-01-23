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
    string S;cin >> S;
    int a,b; cin >> a>> b;
    a--; b--;
    string s="";
    rep(i,S.size()){
        if(i == a){
            s += S[b];
        }
        else if(i == b){
            s += S[a];
        }
        else{
            s += S[i];
        }

        
    }

    cout << s << endl;
    return 0;
}