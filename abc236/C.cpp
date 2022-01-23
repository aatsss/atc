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
    int N,M; cin >> N >> M;
    vector<string> s;
    vector<string> t;
    rep(i,N){
        string str; cin >> str;
        s.push_back(str);
    }
    rep(i,M){
        string str; cin >> str;
        t.push_back(str);
    }
    
    int i=0;
    int j=0;
    while(i < N){
        if(s[i].compare(t[j]) == 0){
            i++; 
            j++;
            cout << "Yes" << endl;
        }else{
            i++;
            cout << "No" << endl;
        }
    }
    return 0;
}