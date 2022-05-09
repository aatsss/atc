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
    int cnt=0;
    rep(i,s.size()){
        if(s[s.size()-1-i] == 'a'){
            cnt++;
        }
        else{
            break;
        }
    }
    int ccn=0;
    rep(i,s.size()){
        if(s[i] == 'a'){
            ccn++;
        }else{
            break;
        }
    }
    // rep(j,cnt+1){
        string a = "";
        rep(i,cnt-ccn){
            a += "a";
        }
        a = a+s;
 
        if(a == string(a.rbegin(), a.rend())){
            cout << "Yes" << endl;
            return 0;
        }
    // }
    cout << "No" << endl;

    return 0;
}

