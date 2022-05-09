#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

const int MAX = 1 << 18 ;
const int INF = (1 << 29);
const int MOD = 1000000007;


/* 連想配列 */

int main()
{
    int n; cin >> n;
    vector<int> x;
    vector<int> y;
    map<int,int> leftmost;
    map<int,int> rightmost;
    string s;
    rep(i,n) {
        int xx; cin >> xx;
        int yy; cin >> yy;
        x.push_back(xx);
        y.push_back(yy);
    }
    cin >> s;

    rep(i,n){
        // cout << x[i] << endl;
        auto rfind = rightmost.find(y[i]);
        auto lfind = leftmost.find(y[i]);
        if(s[i] == 'L'){
            if (rfind == rightmost.end()){
                rightmost[y[i]] = x[i];
            } else {
                rightmost[y[i]] = max(x[i],rightmost[y[i]]);
            }
        } else {
            if (lfind == leftmost.end()){
                leftmost[y[i]] = x[i];    
            } else {
                leftmost[y[i]] = min(x[i],leftmost[y[i]]);
            }
        }

        if (s[i] == 'L') {
            if (lfind != leftmost.end() && x[i] > lfind->second) {
                cout << "Yes" << endl;
                return 0;
            }
        } else {
            if (rfind != rightmost.end() && x[i] < rfind->second) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;

    return 0;
}