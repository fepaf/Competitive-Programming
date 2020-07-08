// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Maior Número de Um Algarismo
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1867

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 102
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
#define qi queue<int>
#define fs first
#define sc second
#define pb push_back

using namespace std;

int mod9(string s){
    if (s=="0") return 0;
    int r=0,t=s.size();
    for (int i=0; i<t; i++) r=(10*r+(s[i]-'0'))%9;
    return r+9*(!r);
}

string n,m;
int n9,m9;

int main(){_
    while ((cin>>n>>m)&&(n!="0" || m!="0")){
        n9=mod9(n), m9=mod9(m);
        cout<<(n9==m9 ? 0 : (n9>m9? 1 : 2))<<endl;
    }
    return 0;
}

