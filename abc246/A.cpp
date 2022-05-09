#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

const int MAX = 1 << 18 ;
const int INF = (1 << 29);
const int MOD = 1000000007;

int main(){
    vector<int> x;
    vector<int> y;
    rep(i,3){
        int dx,dy; cin >> dx>>dy;
        x.push_back(dx);
        y.push_back(dy);
    }
    int ansx,ansy;
    rep(i,3){
        int xx= x[i];
        int yy= y[i];
        int cnty=0;
        int cnt=0;
        rep(j,3){
            if(xx==x[j]){
                cnt++;
            }
            if(yy==y[j]){
                cnty++;
            }
        }
        if(cnt!=2){
            ansx=x[i];
        }
        if(cnty!=2){
            ansy=y[i];
        }
    }

    cout << ansx << " " << ansy << endl;
    return 0;
}