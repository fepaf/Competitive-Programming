// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: O jogo Matemático de Paula
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1192

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

int n,a,b;
char c;

int main(){_
    for (cin>>n;n--;){
        cin>>a>>c>>b;
        if (a==b) cout<<a*b<<endl;
        else if ('a'<=c && c<='z') cout<<a+b<<endl;
        else cout<<b-a<<endl;
    }
    return 0;
}

