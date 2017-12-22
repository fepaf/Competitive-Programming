// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Natal de Pedrinho
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2139

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 1002
#define EPS (1e-7)
#define MOD 1000000007
#define UNVISITED -1
#define VISITED 1
#define ull unsigned long long
#define ll long long
#define ii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vi>
#define vii vector<ii>
#define vd vector<double>
#define vs vector<string>
#define qi queue<int>
#define fs first
#define sc second
#define pb push_back
#define mp make_pair

using namespace std;

int dias[]={0,31,29,31,30,31,30,31,31,30,31,30,31},acum[13];
int d,m,diff;

int main(){_
    for (int i=1;i<=12;i++){
        acum[i]=acum[i-1]+dias[i];
    }
    while(cin>>m>>d){
        diff=360-(acum[m-1]+d);
        if (diff>1){
            cout<<"Faltam "<<diff<<" dias para o natal!"<<endl;
        }
        else if(diff==1){
            cout<<"E vespera de natal!"<<endl;
        }
        else if(diff==0){
            cout<<"E natal!"<<endl;
        }
        else{
            cout<<"Ja passou!"<<endl;
        }
    }
    return 0;
}

