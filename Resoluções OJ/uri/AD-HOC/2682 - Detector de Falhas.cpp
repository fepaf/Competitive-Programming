// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Detector de Falhas
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2682

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define vi vector<int>
#define pb push_back

using namespace std;

vi num;
int x,ant,ans,gd,t,i;

int main(){_
    /*while (scanf("%i",&x)!=EOF){
        num.pb(x);
    }
    t= num.size();
    ant=-1;
    for (i=0; i<t; i++){
        if (num[i]<=ant){
            ans = ant+1;
            break;
        }
        ant = num[i];
    }
    printf("%i\n",(i<t-1 ? ans : num[t-1]+1));*/
    ant = -1;
    while (cin>>x){
        if (x<=ant && !gd){
            ans = ant+1;
            gd = 1;
        }
        ant = x;
    }
    cout<<(gd ? ans : ant+1)<<endl;
    return 0;
}

