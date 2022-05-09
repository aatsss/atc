#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

const int MAX = 1 << 18 ;
const int INF = (1 << 29);
static int MOD = 998244353;

int main()
{   
    int n, q; cin >> n >> q;
    vector<int> x;
    rep(i,q) {
        int xx; cin >> xx;
        x.push_back(xx);
    }

    vector<int> a;
    repi(i,1,n+1) {
        a.push_back(i);
    }

    rep(i,q) {
        auto it = find(a.begin(), a.end(), x[i]);
        int ind = it - a.begin();
        if (ind == n-1) {
            int indx = ind-1;
            swap(a[ind],a[indx]);
        } else {
            int indx = ind+1;
            swap(a[ind],a[indx]);
        }
    }

    rep(i,n) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}