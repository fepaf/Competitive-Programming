#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<8)
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii pair<int, int>
#define fs first
#define sc second
#define eb emplace_back
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))
#define rep(i,a,b) for (int (i)=(a); (i)<=(b); ++(i))
#define repi(i,a,b) for (int (i)=(a); (i)>=(b); --(i))

using namespace std;

int d, sumtime;
int mintime[MAX], maxtime[MAX];
int dp[MAX][MAX], last[MAX][MAX];

int main(){_
    
    cin >> d >> sumtime;

    for (int i=0; i<d; ++i){
        cin >> mintime[i] >> maxtime[i];
    }

//    for (int i=d+1; i--;) for (int j=sumtime+1; j--;) dp[i][j] = -1;
    for (int i=sumtime+1; i--;){
        dp[d][i] = (!i);
    }

    for (int i=d; i--;){
        for (int j=sumtime+1; j--;){
            for (int k=mintime[i]; k<=maxtime[i]; ++k){
                if (j>=k){
                    if (dp[i+1][j-k]){
                        last[i][j] = k;
                    }
                    dp[i][j] |= dp[i+1][j-k];
                }
            }
        }
    }

    int ans = dp[0][sumtime];
    if (ans){
        cout << "YES" << endl;
        int sum = sumtime;
        for (int i=0; i<d; ++i){
            cout << last[i][sum] << ' ';
            sum -= last[i][sum];
        }
        cout << endl;
    }
    else {
        cout << "NO" << endl;
    }

	return 0;
}
