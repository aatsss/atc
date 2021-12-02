#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

const int MAX = 500000;
const int MOD = 1000000007;


int main(){
    int N; cin >> N;

    vector<int> vec[N+1];
    rep(i,N){
        int a,b;
        cin >> a >> b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }

    int flag = 0;
    repi(i,1,N+1){
        set<int> st;
        for(auto next: vec[i]){
            st.insert(next);
        }
        if(st.size() == N-1) flag = 1;
    }

    if(flag==1) cout << "Yes" << endl;
    if(flag==0) cout << "No" << endl;
}