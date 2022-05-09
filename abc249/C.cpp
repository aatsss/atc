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
    int n,k; cin >> n >> k;
    vector<string> s(n);
    rep(i,n) {
        cin >> s[i];
    }
    int ans =0;
    // 3ビットのビット列をすべて列挙する
    for (int tmp = 0; tmp < (1 << n); tmp++) {
        vector<int> sum(26);        // 26 means the total number of alphabet
        for(int i=0;i<n;i++){
            if((tmp>>i)&1) {
                for(int x = 0; x < s[i].size();x++) {
                    sum[s[i][x]-'a']++;
                }
            }
        }

        int now=0;
        rep(j,26){
            if(sum[j]==k) now++;
        }
        ans = max(ans,now);
    }


    cout << ans << endl;
    return 0;
}