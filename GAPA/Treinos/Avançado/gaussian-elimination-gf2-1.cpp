#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 long long
#define lsb(x) (x) & (-x)

using namespace std;

/*
Problema: Verificar se, para cada número de K bits, existe um subconjunto cujo xor
seja igual a esse número de k bits.
*/

map<i64,i64> base;

void insere(i64 x){
    base[0] = 0;
    while (base[lsb(x)]){
        x ^= base[lsb(x)];
    }
    base[lsb(x)] = x;
}

int existe(int x){
    base[0] = 0;
    while (base[lsb(x)]){
        x ^= base[lsb(x)];
    }
    base.erase(base[lsb(x)]);
    return (x==0);
}

i64 n,k,a,rnk;

int main(){_
    while (cin>>n>>k){
        for (int i=0; i<n; ++i){
            cin>>a;
            insere(a);
        }
        rnk = base.size()-1;

        cout<<(rnk>k ? "SIM" : "NAO")<<endl;

        base.clear();
    }
    return 0;
}
