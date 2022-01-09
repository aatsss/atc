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
    ll N,K; cin >> N >> K;
    vector<int> P;
    rep(i,N){
        int tmp; cin >> tmp;
        P.push_back(tmp);
    }

    /* priority queue: defaultでは最大値が取り出される． */
    priority_queue<int,vector<int>,greater<int>> que;
    rep(i,N) que.push(P[i]);
    cout << que.top() << endl;  /* topは要素にアクセス（削除はしない） */
    repi(i,K,N){
        if(que.top() < P[i]){
            que.pop();
            que.push(P[i]);
        }
        cout << que.top() << endl;
    }
    return 0;
}