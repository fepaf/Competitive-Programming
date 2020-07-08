// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Ações
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2568

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define ii pair<int,int>
#define vi vector<int>
#define vvi vector<vi>
#define eb emplace_back
#define fs first
#define sc second
#define ll long long
#define MAX (1<<10)

using namespace std;

int d,i,x,f;

int main(){_
    while (cin>>d>>i>>x>>f){
        cout<<(i+(f&1)*(-1+2*(d&1))*x)<<endl;
    }
    return 0;
}

