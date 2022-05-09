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
    int q; cin >> q;
    deque<ll> xdq;
    deque<ll> cdq;


    while (q != 0){
        ll n; cin >> n;
        if(n==1){
            ll x,c; cin >> x >> c;
            xdq.push_back(x);
            cdq.push_back(c);
        }else{
            int c; cin >> c;
            ll answer=0;
            while(c > 0){
                ll cc = cdq.front();
                ll xx = xdq.front();
                if (c > cc) {
                    answer += xx*cc;
                    c -= cc;
                    cdq.pop_front();
                    xdq.pop_front();
                }else{
                    answer += xx*c;
                    cc -= c;
                    c = 0;
                    cdq.pop_front();
                    cdq.push_front(cc);
                }
            }
            cout << answer << endl;

        }

        q -= 1;

    }

    return 0;
}