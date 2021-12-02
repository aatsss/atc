#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

const int MAX = 500000;
const int MOD = 1000000007;



int main(){
    int H,W; cin >> H >> W ;
    int h,w;
    h = H-1;
    w = W-1;
    vector<vector<int>> A(H,vector<int>(W));
    rep(i,H){
        rep(j,W){
            int a;
            cin >> a;
            A.at(i).at(j) = a;
        }
    }

    //[i,ii,j,jj]
    rep(i,h){
        repi(ii,i+1,H){
            rep(j,w){
                repi(jj,j+1,W){
                    if(A[i][j] + A[ii][jj] > A[ii][j] + A[i][jj]){
                        cout << "No" << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}