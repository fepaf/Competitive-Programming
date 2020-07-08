// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Máquina de Café
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2670

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

int a1,a2,a3;

int main(){_
    cin>>a1>>a2>>a3;
    cout<<2*min(a1*0+a2*1+a3*2,min(a1*1+a2*0+a3*1,a1*2+a2*1+a3*0))<<endl;
    return 0;
}

