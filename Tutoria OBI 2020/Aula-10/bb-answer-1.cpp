#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
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
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int t, a[MAX], lo, hi, md, n, x, q, k, tot;

/*
Achar menor valor M, tal que possa dividir o vetor em k subvetores
todos com soma mais proxima possivel de M e menor que M.
*/

int p(int lim){
    int used = 1, carga=0 ;
    for (int i=0; i<n; ++i){
        if (carga + a[i] > lim){
            ++used;
            carga = a[i];
        } else {
            carga += a[i];
        }
    }
    return (used <= k); // se usei menos pessoas que o exigido devo diminuir o limite
}


int main(){_
    cin >> n >> k;
    for (int i=0; i<n; ++i){
        cin >> a[i];
        tot += a[i];
    }
    lo = 0, hi = tot;
    while (lo < hi){
        md = lo + ((hi-lo)/2);
        if (p(md)) hi = md; // diminui o limite, ou seja, M
        else lo = md+1; // aumenta o limite, ou seja, M
    }
    cout << lo << endl;
    return 0;
}
