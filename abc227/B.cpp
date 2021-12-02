#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;
const int MAX = 500000;
const int MOD = 1000000007;


int main (){
    int N;
    cin >> N ;
    vector<int> vec(N);
    rep(i,N) cin >> vec.at(i);
    
    int cnt = 0,flag = 0;

    rep(i,N){
        repi(j,1,143){
            repi(k,1,143){
                int building;
                building = 4*j*k + 3*j + 3*k;

                if (vec.at(i) == building) {
                    flag = 1;
                    break;
                }
            }
        }

        if(flag == 1){
            flag = 0;
            cnt++;
        }
    }

    cout << N - cnt << endl;
    return 0;
}
