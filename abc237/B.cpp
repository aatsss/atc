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
    int H,W; cin >> H >> W;
    vector<vector<int>> a(H,vector<int>(W));
    rep(i,H){
        rep(j,W){
            cin >> a[i][j];
        }   
    }

    rep(j,W){
        rep(i,H){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}