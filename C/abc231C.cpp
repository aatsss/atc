#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

const int MAX = 1 << 18 ;
const int INF = (1 << 29);
const int MOD = 1000000007;

int N,Q;
vector<int> A;

int_fast64_t binary_search(int key) {
        int ng = -1; //必ず条件を満たさないindexまたは位置
        int ok = (int)A.size(); //必ず条件を満たす位置
    
        /* ok と ng のどちらが大きいかわからないことを考慮 */
        while (abs(ok - ng) > 1) {
            int mid = (ok + ng) / 2;
    
            if (/*任意の関数*/A[mid] >= key) ok = mid;
            else ng = mid;
        }
        return ok;
}

int main()
{
    cin >> N >> Q;
    rep(i,N){
        int tmp; cin >> tmp;
        A.push_back(tmp);
    } 
    sort(A.begin(),A.end());

    rep(i,Q){
        int x; cin >> x;
        int index = binary_search(x);
        cout << N-index << endl;
    }


}