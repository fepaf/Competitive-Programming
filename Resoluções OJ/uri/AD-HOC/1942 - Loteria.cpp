// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Loteria
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1942

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 long long
#define lsb(x) ((x) & (-x))
#define fs first
#define sc second

using namespace std;

map<i64,i64> base;
i64 n, k, rk;
i64 b, mask;

void insere(i64 x){
    base[0] = 0;
    while (base[lsb(x)]){
        x ^= base[lsb(x)];
    }
    base[lsb(x)] = x;
}

i64 existe(i64 x){
    base[0] = 0;
    while (base[lsb(x)]){
        x ^= base[lsb(x)];
    }
    base.erase(lsb(x));
    return (x==0);
}

void showBase(){
    for (auto par : base){
        cout<<par.fs<<" "<<par.sc<<endl;
    }
    cout<<endl;
}


int main(){_
    while (cin>>n>>k){
        for (int i=n; i--;){
            mask = 0LL;
            for (int j=0; j<k; ++j){
                cin>>b;
                mask |= ((b&1)<<j);
            }
            insere(mask);
        }
        rk = base.size()-1;
        cout<<((n-rk) && (rk==k)  ? "N" : "S")<<endl;

        base.clear();
    }
    return 0;
}

