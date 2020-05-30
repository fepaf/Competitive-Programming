#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<13)
#define MOD 1000000007
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

using namespace std;

int s, dp[MAX], n[6], v[]={2,5,10,20,50,100};


int main(){_
    cin >> s >> n[0] >> n[1] >> n[2] >> n[3] >> n[4] >> n[5];


    dp[0] = 1;
    for (int i=0; i<6; ++i){
        for (int j=s; j>=v[i]; --j){
            for (int k=1; k<=n[i] && j>=k*v[i]; ++k){
                dp[j] += dp[j-k*v[i]];
            }
        }
    }

    cout << dp[s] << endl;
    return 0;
}
