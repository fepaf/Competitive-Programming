// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: A Lenda de Flavious Josephus
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1030

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

int win(int n, int k){
    if (n==1) return 0;
    return (win(n-1,k)+k)%n;
}

int nc,n,k,caso;

int main(){_
    for (cin>>nc; nc--;){
        cin>>n>>k;
        cout<<"Case "<<++caso<<": "<<win(n,k)+1<<endl;
    }
    return 0;
}

