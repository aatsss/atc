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
    double time = 0.0;
    vector<vector<double>> vec(N,vector<double>(2));
    rep(i,N){
        double a,b; cin >> a >> b;
        vec[i][0] = a;
        vec[i][1] = b;

        time += a/b;
    }
    time /= 2;
    
    double ans = 0.0;
    int i=0;
    while(time > 0){
        ans += min(vec[i][0], vec[i][1]*time);
        time -= min(time,vec[i][0]/vec[i][1]);
        i++;
    }

    cout << fixed << setprecision(15) << ans << endl;

}