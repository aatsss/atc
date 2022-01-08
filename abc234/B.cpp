#include <bits/stdc++.h>
#include <iomanip>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

const int MAX = 1 << 18 ;
const int INF = (1 << 29);
const int MOD = 1000000007;

long double distance(double x1,double y1,double x2,double y2){
    long double dx = abs(x2-x1);
    long double dy = abs(y2-y1);
    return sqrt(dx*dx+dy*dy);
}

int main()
{
    int N; cin >> N;
    vector<vector<int>> vec(N,vector<int>(2));
    rep(i,N){
        double x,y; cin >> x >> y;
        vec.at(i).at(0) = x;
        vec.at(i).at(1) = y;

        // cout << vec[i][0]<< vec[i][1] << endl;
    }

    long double ans =0;

    rep(i,N){
        repi(j,i+1,N){
            double x1 = vec.at(i).at(0);
            double y1 = vec.at(i).at(1);
            double x2 = vec.at(j).at(0);
            double y2 = vec.at(j).at(1);
            ans = max(ans,distance(x1,y1,x2,y2));
        }
    }

    // cout << ans << endl;
    cout << std::fixed << std::setprecision(15) << ans << endl;


    return 0;
}