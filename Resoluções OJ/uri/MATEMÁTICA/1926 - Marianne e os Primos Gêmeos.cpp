// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Marianne e os Primos Gêmeos
// Nível: 4
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1926

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define vi vector<int>
#define vvi vector<vi>
#define eb emplace_back
#define fs first
#define sc second
#define MAX (1<<20)

using namespace std;

vi primos;
int gemeos[MAX],x,y,q,total[MAX];
bitset<MAX> ehcomp;

void crivo(int n){
    primos.eb(2); ehcomp.reset();
    for (int i=3; i*i<=n; i+=2){
        if (!ehcomp[i]){
            primos.eb(i);
            for (int j=i*i;j<=n;j+=i){
                ehcomp[j]=1;
            }
        }
    }
    int t = primos.size();
    for (int i=primos[t-1]+2; i<=n; i+=2){
        if (!ehcomp[i]){
            primos.eb(i);
        }
    }
}

int main(){_
    crivo(MAX);
    primos.clear();
    crivo(MAX);
    for (int i=1;i<primos.size()-1;i++){
        if (primos[i]+2==primos[i+1]){
            gemeos[primos[i]] = gemeos[primos[i+1]] = 1;
        }
        if (primos[i]-2==primos[i-1]){
            gemeos[primos[i]] = gemeos[primos[i-1]] = 1;
        }
    }


    for (int i=1;i<=(100*100*100)+1;i++){
        gemeos[i]+=gemeos[i-1];
    }


    for (cin>>q;q--;){
        cin>>x>>y;
        if (x>y) swap(x,y);//pode ta em qualquer ordem
        cout<<gemeos[y]-gemeos[x-1]<<endl;
    }
    return 0;
}

