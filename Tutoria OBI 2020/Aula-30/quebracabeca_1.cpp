#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX (1<<20)
#define UNCALCULED 501*100*100
#define INF 0x3f3f3f3f

using namespace std;

int n, m[2];
int a[2][MAX];
int memo[501][501][501];

int f(int idx, int q1, int q2){
    if (idx>n) return (q1==m[0] && q2==m[1] ? 0 : -INF);

    if (q1>m[0]) return -INF;
    
    if (q2>m[1]) return -INF;

    if (memo[idx][q1][q2]!=UNCALCULED) return memo[idx][q1][q2];

    return memo[idx][q1][q2] = max({f(idx+1, q1, q2), f(idx+1, q1+1, q2), f(idx+1, q1, q2+1),f(idx+1, q1+1, q2+1)+a[0][q1+1]*a[1][q2+1]});
}

int main(){_
    cin >> n;
    for (int i=0; i<2; ++i){
        cin >> m[i];
        for (int j=1; j<=m[i]; ++j){
            cin >> a[i][j];
        }
    }

    for (int i=0; i<=n; ++i){
        for (int j=0; j<=m[0]; ++j){
            for (int k=0; k<=m[1]; ++k){
                memo[i][j][k] = UNCALCULED;
            }
        }
    }

    cout << f(0,0,0) << endl;

    return 0;
}