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
    int N ; cin >> N;
    string s ; cin >> s;
    vector<int> a(N+1);
    rep(i,N){
        a[i] = 0;
    }
    repi(i,1,N+1){
        if(s[i-1] == 'L'){
            a[i] = a[i-1];
            for(int j = i-1;j>=0;j--){
                if(a[j] <= a[i]){
                    a[j] += 1;
                }
            }
        }else{
            a[i] = a[i-1]+1;
            for(int j = i-1;j>=0;j--){
                if(a[j] >= a[i]){
                    a[j] += 1;
                }
            }
        }
    }
    int cnt = 0;
    int i = 0;
    while(cnt <= N+1){
        if(a[i%(N+1)] == cnt){
            cout << i << " ";
            cnt ++;
        }
        i++;
    }


    return 0;
}