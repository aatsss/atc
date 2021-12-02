#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

const int MAX = 500000;
const int MOD = 1000000007;

int main(){
    string s; cin >> s;
    sort(s.begin(),s.end());
    set<string> st;

    do{
        st.insert(s);
    }while(next_permutation(s.begin(),s.end()));

    cout << st.size() << endl;

    return 0;
}