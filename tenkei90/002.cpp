#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

const int MAX = 500000;
const int MOD = 1000000007;


bool is_correct(string s)
{
    int ans =0;
    rep(i,s.size()){
        if(s[i] == '('){
            ans++;
        }else{
            ans--;
        }

        if(ans < 0) return false;
    }

    if(ans==0) return true;
    else return false;
}

int main()
{
    int N; cin >> N;
    // bit全探索
    for (int i = 0; i < ( 1 << N ); i++ ) {
        string S = "";
        for (int j = N - 1;j >= 0 ; j--) {
            if( i & ( 1<<j ) ) {
                S += ")";
            } 
            else {
                S += "(";
            }
        }

        if( is_correct(S) ) cout << S << endl;
    }

    return 0;
}