#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

const int MAX = 1 << 9 ;
const int INF = (1 << 29);
const int MOD = 1000000007;

int main()
{
    int N,Q; cin >> N >> Q;
    vector<int> A(N);
    map<int,vector<int>> mp;
    rep(i,N) {
        int num; cin >> num;
        A[i] = num;
        mp[num].push_back(i+1);
    }

    rep(i,Q){
        int x,k; cin >> x >> k;
        x;k--;
        if(k >= 0 && k < mp[x].size() && mp[x][k] != 0){
            cout << mp[x][k] << endl;
        }else{
            cout << -1 << endl;
        }
    }
    
    return 0;
}