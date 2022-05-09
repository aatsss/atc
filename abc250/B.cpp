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
    int n, a, b; cin >> n >> a >> b;

    rep(i,n){
        if(i%2 == 0) {
            rep(m,a) {
                rep(j,n){
                    if(j%2 == 0) {
                        rep(k,b) {
                            cout << ".";
                        }
                    } else {
                        rep(k,b) cout << "#";
                    }
                }
                cout << endl;
            }
        } else {
            rep(m,a){
                rep(j,n){
                    if(j%2 == 0) {
                        rep(k,b) cout << "#";
                    } else {
                        rep(k,b) cout << ".";
                    }
                }
                cout << endl;
            }
        }
        
    }
    return 0;
}