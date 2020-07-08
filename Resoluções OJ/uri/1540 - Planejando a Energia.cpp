// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Planejando a Energia
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1540

#include<bits/stdc++.h>
#define ll long long
#define _ ios_base::sync_with_stdio(0);

using namespace std;

double a,b,c,d,x;
ll n;

int main(){_
    cin>>n;
    while (n--){
        cin>>a>>b>>c>>d;
        x=(d-b)/(c-a);
        cout<<((int)x)<<","<<setfill('0')<<setw(2)<<((int)((x-((int)x))*100))<<endl;
    }
    return 0;
}

