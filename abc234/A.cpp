#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

const int MAX = 1 << 18 ;
const int INF = (1 << 29);
const int MOD = 1000000007;

int func(int t){
    return t*t+2*t+3;
}

int main()
{
    int t; cin >> t;
    cout << func(func(func(t)+t) + func(func(t))) << endl;

    return 0;
}