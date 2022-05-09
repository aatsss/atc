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
    string s; cin >> s;
    map<char,int> ss{};
    int cnt=0;
    int flag = 0;
    rep(i,s.length()){
        if (s[i]>='a' && s[i] <='z') {
            cnt++;
        }
        if (s[i]>='A' && s[i] <='Z') {
            flag++;
        }
        
        if(ss[s[i]]) {
            cout << "No" << endl;
            return 0;
        }
        ss[s[i]]=1;
    }

    if (cnt >=1 && flag >= 1){
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;

    return 0;
}