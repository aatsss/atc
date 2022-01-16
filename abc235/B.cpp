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
    int N; cin >> N;
    vector<int> H(N);
    rep(i,N) cin >> H[i];
    int i = 0;
    while(i<N){
        if(H[i] < H[i+1]){
            i++;
        }else{
            break;
        }
    }
    cout << H[i] << endl; 

    return 0;
}