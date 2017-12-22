// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Hipercampo
// Nível: 5
// Categoria: GEOMETRIA COMPUTACIONAL
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2665

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX (1<<7)

using namespace std;

struct ponto{
    int x,y;
    double theta, alpha;
};

const double pi = 2*acos(0.0);
ponto pontos[MAX];
int n,xa,xb,memo[MAX][MAX],ya,yb;

bool cmp(ponto a, ponto b){
    if (a.theta != b.theta) return a.theta < b.theta;
    else return b.alpha < b.alpha;
}

int f(int idx, int ant){
    if (idx==n+1) return 0; //faz diferença aqui quando mudo a indexacao! porra!
    if (memo[idx][ant]!=-1) return memo[idx][ant];
    if (pontos[idx].theta > pontos[ant].theta && pontos[idx].alpha > pontos[ant].alpha){
        return memo[idx][ant] = max((f(idx+1, idx)+1) , f(idx+1,ant));
    }
    return memo[idx][ant] = f(idx+1,ant);
}

int main(){_
    cin>>n>>xa>>xb;
    for (int i=1;i<=n;i++){
        cin>>pontos[i].x>>pontos[i].y;
        pontos[i].theta = acos((pontos[i].x-xa)/hypot(pontos[i].y,pontos[i].x-xa));
        pontos[i].alpha = acos((xb-pontos[i].x)/hypot(pontos[i].y,pontos[i].x-xb));
    }
    memset(memo,-1,sizeof(memo));
    sort(pontos,pontos+n+1,cmp);
    cout<<f(1,0)<<endl;
    return 0;
}

