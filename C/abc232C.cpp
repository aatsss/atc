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
    int N,M; cin >> N >> M;
    vector<vector<int>> takahashi(N,vector<int>(N));
    vector<vector<int>> aoki(N,vector<int>(N));

    rep(i,M){
        int a,b; cin >> a >> b;
        a--; b--;
        takahashi[a][b] = 1;
        takahashi[b][a] = 1;
    }

    rep(i,M){
        int c,d; cin >> c >> d;
        c--; d--;
        aoki[c][d] = 1;
        aoki[d][c] = 1;
    }

    vector<int> s;
    rep(i,N){
        s.push_back(i);
    }

    int flag = 0;
    do{
        flag = 0;
        rep(i,N){
            rep(j,N){
                if(takahashi[i][j] != aoki[s[i]][s[j]] ){
                    flag = -1;
                }
            }
        }
        if(flag == 0){
            cout << "Yes" << endl;
            return 0;
        }
    }while(next_permutation(s.begin(),s.end()));

    if(flag == -1){
        cout << "No" << endl;
    }

    return 0;
}