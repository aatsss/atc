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
    int  a,b,c,d,e,f,x;
    cin >> a >> b >> c >> d >> e >> f >> x;
    double taka,aoki;
    double remain = x%(a+c);
    if (remain > a){
        taka = (x/(a+c)) * b*a + b * a;
    } else {
        taka = (x/(a+c)) * b*a + b * (x%(a+c));
    }
    remain = x%(d+f);
    if (remain > d) {
        aoki = (x/(d+f))*e*d + d*e;
    } else {
        aoki = (x/(d+f))*e*d + remain*e;
    }

    if (aoki > taka) {
        cout << "Aoki" << endl;
    } else if(aoki == taka) {
        cout << "Draw" << endl;
    }else {
        cout << "Takahashi" << endl;
    }
    
    
    return 0;
}