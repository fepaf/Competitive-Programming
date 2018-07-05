// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Diversão dos Alunos
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2116

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define pb push_back
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define vvii vector<vii>
#define vvi vector<vi>
#define fs first
#define sc second

using namespace std;

int n,m,p1,p2;

inline int ehprimo(int n){
    if ((n<5)||(n%2==0)||(n%3==0)) return ((n==2)||(n==3));
    for (int i=5; i*i<=n; i+=6) if ((n%i==0)||(n%(i+2)==0)) return 0;
    return 1;
}

int main(){_
    while (cin>>n>>m){
        for (p1=n;p1;p1--){
            if (ehprimo(p1)) break;
        }
        for (p2=m;p2;p2--){
            if (ehprimo(p2)) break;
        }
        cout<<p1*p2<<endl;
    }
    return 0;
}

