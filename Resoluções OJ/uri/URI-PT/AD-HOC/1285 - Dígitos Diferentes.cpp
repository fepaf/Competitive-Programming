// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Dígitos Diferentes
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1285

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define fs first
#define sc second
#define eb emplace_back
#define vi vector<int>

using namespace std;

int n,m,memo[5][1<<11][2],tam;
vi dig;

vi get_digits(int x){
    vi ans;
    do{
        ans.eb(x%10);
        x/=10;
    }while(x);
    return ans;
}

int solve(int idx, int mask, int restrito){
    if (idx == -1) return (__builtin_popcount(mask)==tam);
    int &ans = memo[idx][mask][restrito];
    if (~ans) return ans;
    ans = 0;
    int limite = (restrito ? dig[idx] : 9);
    for (int d=(idx==(tam-1)) ; d<=limite; d++){
        ans += solve(idx-1, ((1<<d)|mask), (d<dig[idx] ? 0 : restrito));
    }
    return ans;
}

int f(int x){
    int ans=0;
    dig = get_digits(x);
    for (tam = ((int)dig.size()); tam; tam--){
        memset(memo,-1,sizeof(memo));
        ans += solve(tam-1,0,tam==dig.size());
    }
    return ans;
}

int main(){_
    while (cin>>n>>m){
        cout<<f(m)-f(n-1)<<endl;
    }
    return 0;
}

