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
    vector<int> A[MAX];
    vector<int> A_t[MAX];

    repi(i,0,H){
        repi(j,0,W){
            int a; cin >> a;
            A[i].push_back(a);
            A_t[j].push_back(a);
        }
    }

    vector<int> horizontal;
    vector<int> vertical;

    repi(i,0,H){
        int h=0;
        repi(j,0,W){
            h += A[i][j];
        }
        horizontal.push_back(h);
    }

    repi(i,0,W){
        int v = 0;
        repi(j,0,H){
            v += A_t[i][j];
        }
        vertical.push_back(v);
    }

    repi(i,0,H){
        repi(j,0,W){
            cout << horizontal[i] + vertical[j] - A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}