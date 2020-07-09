#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXN (1<<20)

using namespace std;

int pai[MAXN];

void init(int n){
    for (int i=0; i<=n; i++){
        pai[i] = i;
    }
}

int id(int x){
    return pai[x] == x ? pai[x] : pai[x] = id(pai[x]);
}

void join(int u, int v){
    pai[id(v)] = id(u);
}

int n; // número de elementos
int q; // número de consultas/operações
int x, y;
string opcao;

int main(){_
    while (cin>>n>>q){
        init(n);
        while (q--){
            cin>>opcao>>x>>y;;
            if (opcao == "uniao"){
                if (id(x) != id(y)){// essa condição não é necessária
                    join(x, y);
                }
            }
            else if (opcao == "consulta"){
                cout<<(id(x) == id(y) ? "mesmo conjunto" : "conjuntos disjuntos")<<endl;
            }
        }
    }
    return 0;
}
