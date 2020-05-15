#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii pair<int, int>
#define iii pair<int, ii>
#define fs first
#define sc second
#define eb emplace_back
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define viii vector<iii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))

using namespace std;

int t;
int n, a[MAX];

int tam(int l, int r){
    return ((r-l+1)&1);
}

priority_queue<iii, viii> fila;
int l, r, m, len;

int main(){_
    cin >> t;
    while (t--){
        cin >> n;
        
        fila.push(iii(n-1,ii(-1,n)));
        for (int i=1; i<=n; ++i){
            iii p = fila.top(); fila.pop();
            len = p.fs, l = -p.sc.fs, r = p.sc.sc;

            if (tam(l,r)){
                m=((l+r)>>1);
            }
            else{
                m=((l+r-1)>>1);
            }

            a[m] = i;

            if (m-l >= r-m){
                if (l <= m-1) fila.push(iii(m-l, ii(-l, m-1)));
                if (m+1 <= r) fila.push(iii(r-m,ii(-(m+1),r)));
            }
            else{
                if (m+1 <= r) fila.push(iii(r-m,ii(-(m+1),r)));
                if (l <= m-1) fila.push(iii(m-l, ii(-l, m-1)));
            }

        }

        for (int i=1; i<=n; ++i){
            cout << a[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}
