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
    int num; cin >> num;
    int a = num/100;
    int b = (num - a*100)/10;
    int c = num%10;

    int bca = b*100+c*10 + a;
    int cab = c*100 + a*10 + b;
    cout << num+bca+cab << endl;
    return 0;
}