#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

const int MAX = 500000;
const int MOD = 1000000007;

vector<int> A;
int N,L; 
int K; 



bool greedy_search(int mid,int K)
{   
    int cnt=0;
    int pos=0;
    repi(i,1,N+1){
        if((A[i]-pos >= mid) && (L-A[i] >= mid)){
            pos = A[i];
            cnt++;
        }
    }

    if(cnt >= K) return true;
    else return false;
}

int binary_search(int key) {
    int ng = L+1; //「index = 0」が条件を満たすこともあるので、初期値は -1
    int ok = -1; // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()

    /* ok と ng のどちらが大きいかわからないことを考慮 */
    while (abs(ok - ng) > 1) {
        int mid = (ok + ng) / 2;

        if (greedy_search(mid, key)) ok = mid;
        else ng = mid;
    }
    return ok;
}


int main()
{
    cin >> N >> L;
    cin >> K;
    A.push_back(0);
    rep(i,N){
        int a; cin >> a;
        A.push_back(a);
    }
    int ans = binary_search(K);

    cout << ans << endl;
}

