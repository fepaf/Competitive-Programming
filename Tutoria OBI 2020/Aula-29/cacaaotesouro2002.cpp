#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX (1<<20)
#define MAXN (100)
#define MAXV (100)
#define MAXXY (50)
#define MAX (1<<20)

using namespace std;

int n, x, y, v[MAX];
int dp[MAXN * MAXV * MAXXY+5];
int sum;
int test;

int main(){_
    while ((cin >> x >> y >> n) && (x || y || n)){
        sum = x+y;

        for (int i=1; i<=n; ++i){
            cin >> v[i];
            sum += v[i];
        }

        dp[0] = 1;
        for (int i=1; i<=sum; ++i){
            dp[i] = 0;
        }

        cout << "Teste " << ++test << endl;
        if (!(sum&1)){
            sum >>= 1;
            sum -= x;
            for (int i=1; i<=n; ++i){
                for (int j=sum; j>=v[i]; --j){
                    dp[j] |= dp[j-v[i]];
                }
            }
            cout << (dp[sum] ? 'S' : 'N') << endl;
        } else {
            cout << 'N' << endl;
        }
        cout << endl;
    }
    return 0;
}