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

int t, a[MAX], lo, hi, md, n, x, q, v;

/*
Acha indice da primeira ocorrencia de um valor maior que V
*/

int p(int idx, int x){
    return x < a[idx];
}

int main(){_
    cin >> n;
    for (int i=0; i<n; ++i){
        cin >> a[i];
    }
    sort(a, a+n);
    cin >> q;
    while (q--){
        cin >> v;

        lo = 0, hi = n;
        while (lo < hi){
            md = lo + (hi-lo)/2;
            if (p(md, v)) hi = md;
            else lo = md + 1;
        }
        if (lo<n){
            cout << "o primeiro valor maior que " << v << " é " << a[lo] << " e está na posição " << lo << endl;
        } else{
            cout << "nao existe" << endl;
        }
    }

    return 0;
}
