// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: TDA Racional
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1022

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f3f
#define ii pair<ll,int>
#define vi vector<ll>
#define vvi vector<vi>
#define eb emplace_back
#define fs first
#define sc second
#define ll long long
#define MAX (1<<10)

using namespace std;

int n1,n2,d1,d2,n,d,m;
char s1,s2,op,sinal;

int main(){_
    for (cin>>m;m--;){
        cin>>n1>>s1>>d1>>op>>n2>>s2>>d2;
        if (op=='+'){
            n = (n1*d2+n2*d1);
            d = (d1*d2);
        }
        else if (op=='-'){
            n = (n1*d2-n2*d1);
            d = (d1*d2);
        }
        else if (op=='*'){
            n = (n1*n2);
            d = (d1*d2);
        }
        else{
            n = (n1*d2);
            d = (n2*d1);
        }
        sinal = (n*d)/abs(n*d);
        n = abs(n) , d = abs(d);
        cout<<sinal*n<<'/'<<d<<" = "<<sinal*n/__gcd(n,d)<<'/'<<d/__gcd(n,d)<<endl;
    }
}

