#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

const int MAX = 500000;
const int MOD = 1000000007;

int main()
{
    string S; cin >> S;
    string T= "oxxoxxoxxoxxoxxoxxoxx";

    int pos = T.find(S);
    if(pos == string::npos){    
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }

}