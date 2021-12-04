#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

const int MAX = 500000;
const int MOD = 1000000007;

int main(){
    int N; cin >> N;
    ostringstream sout;
    
    if (N > 41) N = N+1;
    sout << setfill('0') << setw(3) << N;
    string s = sout.str();
    cout << "AGC" << s << endl;

    return 0;

}