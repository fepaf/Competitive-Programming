#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);
#define all(x) (x).begin(),(x).end()
    
using namespace std;
    
struct pais{
    int o,p,b,id;
};
    
int cmp(pais a, pais b){
    if (a.o != b.o) return a.o > b.o;
    if (a.p != b.p) return a.p > b.p;
    if (a.b != b.b) return a.b > b.b;
    return a.id < b.id;
}
    
int t,n,m,o,p,b;
vector<pais> paises;
    
int main(){_
    cin>>n>>m;
    paises = vector<pais>(n);
    while (m--){
        cin >> o >> p >> b;
        o--, p--, b--;
        paises[o].o++;
        paises[p].p++;
        paises[b].b++;
    }
    for (int i=n;i--;){
        paises[i].id=i+1;
    }
    stable_sort(all(paises), cmp);
    for (int i=0;i<n;i++){
        cout<<paises[i].id<<" ";
    }
    cout<<endl;
    return 0;
} 