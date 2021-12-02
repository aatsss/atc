#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

// 考える最大の整数
const int MAX = 500000;
// 今回採用する大きい素数
const int MOD = 1000000007;

int main(){
    int N,K,A;
    cin >> N >> K >> A ;

    if(N == 1){
        K = 1;
    }else{
    K = K % N;
    }

    
    if ((A+K-1) > N){
        cout << A+K-N-1 << endl;
    }
    else{
        cout << A+K-1 << endl;
    }
    return 0;
}