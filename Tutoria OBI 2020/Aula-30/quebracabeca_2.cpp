#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX (1<<20)
#define UNCALCULED 501*100*100
#define INF 501*100*100

using namespace std;

int n, m[2];
int a[2][MAX];
int dp[2][501][501];

int main(){_
    cin >> n;
    for (int i=0; i<2; ++i){
        cin >> m[i];
        for (int j=1; j<=m[i]; ++j){
            cin >> a[i][j];
        }
    }

    for (int q1=m[0]; q1>=0; --q1){
        for (int q2=m[1]; q2>=0; --q2){
            dp[n&1][q1][q2] = (q1==m[0] && q2==m[1] ? 0 : -INF);
        }
    }

    for (int idx=n-1; idx>=0; --idx){
        for (int q1=m[0]; q1>=0; --q1){
            for (int q2=m[1]; q2>=0; --q2){
                dp[(idx)&1][q1][q2] = dp[(idx+1)&1][q1][q2];
                if (q1 < m[0]){
                    dp[(idx)&1][q1][q2] = max(dp[(idx)&1][q1][q2], dp[(idx+1)&1][q1+1][q2]);
                }
                if (q2 < m[1]){
                    dp[(idx)&1][q1][q2] = max(dp[(idx)&1][q1][q2], dp[(idx+1)&1][q1][q2+1]);
                }
                if (q1 < m[0] && q2 < m[1]){
                    dp[(idx)&1][q1][q2] = max(dp[(idx)&1][q1][q2], dp[(idx+1)&1][q1+1][q2+1] + a[0][q1+1]*a[1][q2+1]);
                }
            }
        }
    }

    cout << dp[0][0][0] << endl;

    return 0;
}