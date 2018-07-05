// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Guru da Sorte
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2508

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

int n,m,caso,x,ans;
string nome;

int main(){_
    while (getline(cin,nome)){
        ans=0;
        for (int i=nome.size();i--;){
            ans+=(nome[i]==' ' ? 0 : (tolower(nome[i])-'a')%9+1);
        }
        cout<<(ans%9 ? ans%9 : 9)<<endl;
    }
    return 0;
}

