#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

const int MAX = 1 << 18 ;
const int INF = (1 << 29);
const int MOD = 1000000007;


int ceil(int x,int y){
    return (x+y-1)/y;
}

int main()
{
    int X; cin >> X;
    int Y; cin >> Y;

    if(X >= Y){
        cout << 0 << endl;
    }else{
        // ceil関数を用意する
        // cout << ceil(Y-X,10) < endl;
        int cnt =1;
        int remain = Y-X;
        while(1){
            if(remain <= cnt*10){
                cout << cnt << endl;
                break;
            }
            else{
                cnt ++;
            }
        }

    }
}