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

/*
Acha indice da primeira ocorrencia de um valor maior que V
*/

int t, a[MAX], lo, hi, md, n, x, q, v, pos, valor;

int main(){_
    cin >> n;
    for (int i=0; i<n; ++i){
        cin >> a[i];
    }
    sort(a, a+n);
    cin >> q;
    while (q--){
        cin >> v; 
        pos = upper_bound(a, a+n, v) - a; // indice do primeiro cara do array que é maior ou igual a V
        //pos = upper_bound(a.begin(), a.end(), v) - a.begin();
        valor = *upper_bound(a, a+n, v);
        if (pos < n){ // it != a.end();
            cout << "o primeiro valor maior ou igual que " << v << " é " << valor << " e está na posição " << pos << endl;
        }
        else {
            cout << "Não encontrado" << endl;
        }
    }

    return 0;
}
