// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Getline Two - Frutas
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1217

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

double v, medv,somav,somat;
int n,t;
string linha,fruta;
stringstream ss;

int main(){_
    cin>>n;
    getline(cin,linha);
    somav=somat=0;
    for (int i=1; i<=n; i++){
        ss.clear();
        cin>>v;
        getline(cin,linha);
        getline(cin,linha);
        for (ss<<linha, t=0; ss>>fruta; t++);
        cout<<"day "<<i<<": "<<t<<" kg"<<endl;
        somav+=v;
        somat+=t;
    }
    cout<<fixed<<setprecision(2);
    cout<<somat/n<<" kg by day"<<endl;
    cout<<"R$ "<<somav/n<<" by day"<<endl;    
    return 0;
}

