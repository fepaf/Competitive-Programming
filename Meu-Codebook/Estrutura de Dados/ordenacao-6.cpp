#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX (1<<20)

using namespace std;

/*ordena um array de struct crescente por nome e decrescente por idade e crescente por altura*/

struct tpessoa{
    string nome;
    int idade;
    double altura;
};

int cmp(tpessoa a, tpessoa b){
    if (a.nome != b.nome) return a.nome < b.nome;
    if (a.idade != b.idade) return a.idade > b.idade;
    return a.altura < b.altura;
}

int n;
tpessoa pessoas[MAX];

int main(){_
    while (cin>>n){
        for (int i=0; i<n; ++i){
            cin>>pessoas[i].nome>>pessoas[i].idade>>pessoas[i].altura;
        }
        sort(pessoas,pessoas+n,cmp);//stable_sort ordena estável
        for (int i=0;i<n; ++i){
            cout<<pessoas[i].nome<<" "<<pessoas[i].idade<<" "<<pessoas[i].altura<<endl;
        }
        cout<<endl;
    }
    return 0;
}
