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
    int h, w; cin >> h >> w;
    int r, c; cin >> r >> c;
    int ans =0;
    for (int i = -1 ; i < 2; i ++) {
        for (int j = -1 ; j < 2; j ++)
        if ((r + i) <= h && (c + j) <= w && (r + i) >= 1 && (c + j) >= 1) {
            int a = r+i;
            int b = c+j;
            if ((abs(a-r) + abs(b-c)) == 1) {
                ans += 1;
            } 
        }
    }

    cout << ans << endl;
    return 0;
}