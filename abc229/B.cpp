#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

const int MAX = 500000;
const int MOD = 1000000007;

int main()
{
    string A,B; cin >> A >> B ;
    reverse(A.begin(),A.end());
    reverse(B.begin(),B.end());

    int length = A.size() < B.size() ? A.size() : B.size();
    rep(i,length){
        
        int a = (int)(A[i])-48;
        int b = (int)(B[i])-48;
        // cout << a << endl;
        if(a+b > 9){
            cout << "Hard" << endl;
            return 0;
        }
    }
    cout << "Easy" << endl;


}