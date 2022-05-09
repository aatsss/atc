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
    int n; cin >> n;
    vector<string> s;
    vector<string> t;

    rep(i,n){
        string ss,tt; cin >> ss >> tt;
        s.push_back(ss);
        t.push_back(tt);
    } 
    int no = 0;
    rep(i,n) {
        string a; a = s[i];
        rep(j,n){
            if(i != j && a==s[j]){
                no = 1;

            }
            if(i != j && a == t[j] ){
                no = 1;
  
            }
        }
        
    }
    int nn=0;
    rep(i,n) {
        string a; a = t[i];
        rep(j,n){
            if(i != j && a==s[j]){
                nn = 1;

            }
            if(i != j && a == t[j] ){
                nn = 1;

            }
        }
        
    }

    if (no == 0 || nn == 0){
        cout << "Yes" << endl;    
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}