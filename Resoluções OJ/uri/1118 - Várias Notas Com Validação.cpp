// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Várias Notas Com Validação
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1118

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int main(){_
    long long x;
    double n1,n2;
    cout<<fixed<<setprecision(2);
    do{
        do{
            cin>>n1;
            if (n1<0 || n1>10) cout<<"nota invalida"<<endl;
        } while (n1<0 || n1>10);
        do{
            cin>>n2;
            if (n2<0 || n2>10) cout<<"nota invalida"<<endl;
        } while (n2<0 || n2>10);
        cout<<"media = "<<(n1+n2)/2.0<<endl;
        do{
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
            cin>>x;
        } while (x!=1 && x!=2);
    }while (x==1);
    return 0;
}

