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
    string N; cin >> N;
    int len = N.size();
    sort(N.begin(),N.end());
    int ans = 0;
    do{

        repi(i,1,len){
            string l = "";
            string r = "";
            rep(j,i) l += N[j];
            repi(j,i,len) r += N[j];
            if(l[0] != '0' && r[0] != '0'){
                ans = max(ans,stoi(l)*stoi(r));
            }
        }
        
    }while(next_permutation(N.begin(),N.end()));

    cout << ans << endl;
    return 0;
}