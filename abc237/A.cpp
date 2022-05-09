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
    
    ll n; cin >> n;
    int a = -2147483648;
    int b = 2147483647;
    if(n >= a && n <= b ){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}