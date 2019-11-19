#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX (1<<20)

using namespace std;

/*ordena um array de struct crescente por nome e decrescente por idade*/

struct tpessoa{
    string nome;
    int idade;
};

int cmp(tpessoa a, tpessoa b){
    if (a.nome != b.nome) return a.nome < b.nome;
    return a.idade > b.idade;
}

int n;
tpessoa pessoas[MAX];



int main(){_
    while (cin>>n){
        for (int i=0; i<n; ++i){
            cin>>pessoas[i].nome>>pessoas[i].idade;
        }
        sort(pessoas,pessoas+n,cmp);
        for (int i=0;i<n; ++i){
            cout<<pessoas[i].nome<<" "<<pessoas[i].idade<<endl;
        }
        cout<<endl;
    }
    return 0;
}
