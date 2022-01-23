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
    int tmp;
    vector<int> vec(N+1);
    rep(i,N+1){
        vec[i] = 0;
    }
    rep(i,4*N-1){
        int num; cin >> num;
        tmp = num;
        vec[num] += 1;
    } 
    int ans;


    
    repi(i,1,N+1){
        if(vec[i] != 4) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}