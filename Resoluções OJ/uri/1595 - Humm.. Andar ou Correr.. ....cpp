// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Humm.. Andar ou Correr.. ...
// Nível: 3
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1595

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define vd vector<double>

using namespace std;

int s,c,r,t,i;
double ans;
vd v;

int main () {_

    for (cin>>t;t--;){
        cin>>s>>c>>r;
        v = vd(s,0);
        for (auto& x : v) cin>>x;
        sort(v.begin(), v.end());
        ans=0;
        for (i=0;i<c;i++) ans += 1.0/(v[i]+r);
        for (i=c;i<s;i++) ans += 1.0/v[i];
        cout<<fixed<<setprecision(2)<<ans<<endl;
    }
    return 0;
}

