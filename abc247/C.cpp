#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

const int MAX = 1 << 18 ;
const int INF = (1 << 29);
const int MOD = 1000000007;


int cnt = 1;
string recv(int num,string ans){
    string str = to_string(num);

    if( num == 1){
        return "1";
    }
    else{
        return recv(num-1,ans) + " " + str +  " " + recv(num-1,ans);
    }
}

int main()
{
    int n; cin >> n;
    string a = recv(n, "");

    cout << a << endl;

    return 0;
}