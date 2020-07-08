// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Dia Difícil de Trabalho
// Nível: 4
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1831

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'

using namespace std;

typedef long long ll;

ll a,b,x,y;

ll ee(ll a, ll b){
        ll mdc;
        if (!b) {
            x=1,y=0;
            return a;
        }
      
        mdc=ee(b,a%b);
        
        ll xx=y, yy=x-y*(a/b);
        x=xx,y=yy;

        return mdc;
}

ll l[3],r[3],mod,rest,caso;

int main(){_
        while (cin>>r[0]>>l[0]>>r[1]>>l[1]>>r[2]>>l[2]){
                mod=1;
                for (ll i=3;i--;){
                        ee(mod,l[i]);
                        x=((x%l[i])+l[i])%l[i];
                        y=((y%mod)+mod)%mod;
                        rest=((rest*l[i]*y)%(l[i]*mod)+(r[i]*mod*x)%(l[i]*mod))%(l[i]*mod);
                        mod*=l[i];
                }
                cout<<"Caso #"<<++caso<<": "<<rest+(!rest)*mod<<" laranja(s)"<<endl;
        }
        return 0;
}


