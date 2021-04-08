#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF (2e18)
#define MAX (1<<20)
#define MOD 1000000007
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii antr<int, int>
#define fs first
#define sc second
#define eb emplace_back
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;
#define branco 0
#define cinza -1
#define preto 1

using namespace std;

/*
Problem: Counting Coprime Pairs
Link: https://cses.fi/problemset/task/2417
*/

i64 par[MAX], f[MAX], prod[MAX];

void crivo_modificado(int n){
    for (int i=MAX; i--;){
        prod[i] = 1;
    }
    int i;
    for (i=2; i*i<MAX; ++i){
        if (prod[i]==1){
            for (int j=i, k=i; j<MAX; j+=i){
                if (--k){
                    prod[j] *= i;
                    par[j] ^= 1;
                } else{
                    prod[j] = 0;
                    k = i;
                }
            }
        }
    }
    for (; i<MAX; ++i){
        if (prod[i] && prod[i]!=i){
            par[i] ^= 1;
        }
    }
}

int x;
i64 ans, n, no_cop;

int main(){_
    cin >> n;
    crivo_modificado(n);
    for (int i=n; i--;){
        cin >> x;
        ++f[x];
    }
    ans = ((n*(n-1))>>1);
    for (int i=2; i<MAX; ++i){
        if (prod[i]){
            no_cop = 0;
            for (int j=i; j<MAX; j+=i){
                no_cop += f[j];
            }
            ans -= (par[i] ? 1 : -1)*((no_cop*(no_cop-1))>>1);
        }
    }
    cout << ans << endl;
    return 0;     
}
