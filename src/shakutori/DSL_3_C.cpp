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
    ll n,q; cin >> n >> q;
    vector<ll> a;
    vector<ll> x;
    vector<ll> sumlist;
    rep(i,n) {
        ll aa; cin >> aa;
        a.push_back(aa);
    }
    rep(i,q){
        ll xx; cin >> xx;
        x.push_back(xx);
    }

    sumlist.push_back(0);
    repi(i,1,n+1){
        sumlist.push_back(sumlist[i-1]+a[i-1]);
    }


    rep(i,q){
        ll target = x[i];
        ll res = 0;

        int right = 0;
        for(int left = 0;left < n; left++){
            while (right < n && sumlist[right+1] - sumlist[left] <= target) {
                ++right;
            }
            res += right-left;
            if(right == left) right++;
        }

        cout << res << endl;
    }


    return 0;
}