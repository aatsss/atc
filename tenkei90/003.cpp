#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

const int MAX = 1<< 18;
const int INF = (1 << 29);
const int MOD = 1000000007;

int N;
int A[MAX],B[MAX];

vector<int> G[MAX];
int dist[MAX];


void getdist(int start)
{
    repi(i,1,N+1){
        dist[i] = INF;
    }

    queue<int> que;
    que.push(start);
    dist[start] = 0;

    while(!que.empty()){
        int v = que.front(); que.pop();

        for(int nv: G[v]){
            if(dist[nv] != INF) continue;
            
            dist[nv] = dist[v]+1;
            que.push(nv);
        }   
    }
}

int main()
{
    cin >> N;
    repi(i,1,N+1){
        cin >> A[i] >> B[i];
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }

    getdist(1);
    int maxN = -1,maxNid = -1;
    repi(i,1,N+1){
        if(maxN < dist[i]){
            maxN = dist[i];
            maxNid = i;
        }
    }

    getdist(maxNid);
    int maxN2 = -1;
    repi(i,1,N+1){
        maxN2 = max(maxN2,dist[i]);
    }

    cout << maxN2+1 << endl;

    return 0;
}