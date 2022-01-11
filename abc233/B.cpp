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
    int L,R; cin >> L >> R;
    string S; cin >> S;
    string subS = S.substr(L-1,R-L+1);
    reverse(subS.begin(),subS.end());
    cout << S.replace(L-1,R-L+1,subS) << endl;

    return 0;
}