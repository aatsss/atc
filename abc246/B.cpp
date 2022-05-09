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
    double A,B; cin >> A >> B;
    double R = sqrt(A*A+B*B);
    
    cout << std::fixed << std::setprecision(15) << A/R << " " << B/R << endl;

    return 0;
}