// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Trilha Perigosa
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2655

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define ii pair<int,int>
#define vi vector<int>
#define vvi vector<vi>
#define eb emplace_back
#define fs first
#define sc second
#define ll long long
#define MAX (100123)

using namespace std;

vvi t;
int n,m,q,x,y,op,ans,a[MAX];

void update(int monster, int idx, int v){
    while (idx<=n){
        t[monster][idx] += v;
        idx += (idx & -idx);
    }
}

int query(int monster, int idx){
    int ans = 0 ;
    while (idx > 0){
        ans += t[monster][idx];
        idx -= (idx & -idx);
    }
    return ans;
}

int main(){_
    cin>>n>>q>>m;
    t = vvi(m+1,vi(n+1,0));
    for (int i=1;i<=n;i++){
        cin>>a[i];
        update(a[i],i,1);
    }
    while (q--){
        cin>>op;
        if (op==1){
            cin>>x>>y;
            ans = 0;
            for (int i=1; i<=m; i++){
                ans += ((query(i,y)-query(i,x-1))!=0);
            }
            cout<<ans<<endl;
        }
        else {
            cin>>x>>y;
            update(a[x],x,-1);
            update(y,x,1);
            a[x] = y; //atualizei o montro da posiçaõ x;
        }
    }
    return 0;
}

