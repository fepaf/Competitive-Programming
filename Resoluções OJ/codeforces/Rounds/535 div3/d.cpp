#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define MAX 200123
#define vi vector<int>
#define all(x) (x).begin() , (x).end()
#define eb emplace_back
#define fs first
#define sc second
#define lsb(x) ((x)&-(x))

using namespace std;

int n, dp[3][MAX], ant[3][MAX];
string s;
char c[3]={'R','G','B'};

int main(){_
    cin >> n >> s;

    dp[0][n] = dp[1][n] = dp[2][n] = 0;

    for (int i=n;i--;){
        for (int j=3;j--;){
            if (dp[(j+1)%3][i+1] < dp[(j+2)%3][i+1]){
                dp[j][i] = dp[(j+1)%3][i+1];
                ant[j][i] = (j+1)%3;
            }
            else {
                dp[j][i] = dp[(j+2)%3][i+1];
                ant[j][i] = (j+2)%3;
            }
            dp[j][i] += (c[j]!=s[i]);
        }
    }

    int idx = 0;
    for (int i=3; i--;){
        if (dp[idx][0] > dp[i][0]){
            idx = i;
        }
    }

    cout << dp[idx][0] << endl;

    for (int i=0; i<n; ++i){
        cout << c[idx];
        idx = ant[idx][i];
    }
    cout << endl;

    return 0;
}
