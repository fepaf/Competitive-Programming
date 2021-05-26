#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX 3
#define OUT MAX
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
#define esq(x) (x<<1)
#define dir(x) ((x<<1)|1)
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int n, a[MAX][MAX];

/*
tipoDeRetorno nomeDafunção(tipoDOparametro1 nomeDoparametro1, ...){

}
*/


void busca(int x, int b[][MAX]){
    for (int i=0; i<MAX; ++i){
        for (int j=0; j<MAX; ++j){

            if (b[i][j]==x){
                cout << "Achei "<< x << " na posicao " << i <<' ' << j << endl;
                return;
            }
            
            b[i][j] = -1;
        }
    }
    cout << "nao achou" << endl;
}


void imprimeMatriz(int b[][MAX]){
    for (int i=0; i<MAX; ++i){
        for (int j=0; j<MAX; ++j){
            cout << b[i][j] << ' ';
        }
        cout << endl;
    }
}

int main(){_
    cin >> n;
    for (int i=0; i<MAX; ++i){
        for (int j=0; j<MAX; ++j){
            cin >> a[i][j];
        }
    } 
    busca(n, a);
    imprimeMatriz(a);
    return 0;
}
