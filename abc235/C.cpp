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
    int backet[MAX][MAX];
    multimap<int,int> mp{};
    rep(i,N) {
        int num; cin >> num;
        A[i] = num;
        mp.insert(make_pair(num,i+1));
    }

    rep(i,Q){
        int x,k; cin >> x >> k;
        x--;k--;
        auto itr = mp.find(x);
        if(itr != mp.end()){
            int n = mp.count(1);
            for(int j = 0; j < n; j++){
                if (j == k){
                    cout << "found: at index " << i << endl;
                }
            }
        }else{
            cout << -1 << endl;
        }
        
    }
    
    return 0;
}