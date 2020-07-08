// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Confederação
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1710

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXM (1<<9)
#define MAXN (10123)
#define msi map<string,int>
#define ll long long

using namespace std;

struct Plano{
    ll a,b,c,d;
};

struct Ponto{
    ll x,y,z;
};

int n,m,ans;
Plano pl[MAXM];
Ponto pt[MAXN];
msi freq;
string mask;

int main(){_
    cin>>m>>n;
    for (int i=0;i<m;i++){
        cin>>pl[i].a>>pl[i].b>>pl[i].c>>pl[i].d;
    }
    for (int i=0; i<n; i++){
        cin>>pt[i].x>>pt[i].y>>pt[i].z;
        mask="";
        for (int j=0; j<m; j++){
            mask+=(char)((pl[j].a*pt[i].x+pl[j].b*pt[i].y+pl[j].c*pt[i].z>pl[j].d)+'0');
        }
        ans=max(++freq[mask],ans);
    }
    cout<<ans<<endl;
    return 0;
}

