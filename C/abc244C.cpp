#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

const int MAX = 1 << 18 ;
const int INF = (1 << 29);
const int MOD = 1000000007;

bool used[2005];


int main()
{
    int n; cin >> n;
    while(1){
        repi(i,1,2*n+2){
            if(!used[i]){
                cout << i <<endl;
                used[i] = true;
                break;
            }
        }

        int op_num; cin >> op_num;
        if(op_num == 0){
            return 0;
        }
        used[op_num] = true;
    }
    return 0;

}