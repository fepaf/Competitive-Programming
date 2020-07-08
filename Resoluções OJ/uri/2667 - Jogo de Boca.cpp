// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Jogo de Boca
// Nível: 3
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2667

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MOD 1000000007
#define MAX 100123
#define INF 0x3f3f3f3f
#define MAXT 52
#define ii pair<ll,ll>
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define eb emplace_back
#define fs first
#define sc second
#define ll long long

using namespace std;

char c;
int ans;

int main(){_
    while (cin>>c) ans+=c-'0';
    cout<<ans%3<<endl;
    return 0;
}

