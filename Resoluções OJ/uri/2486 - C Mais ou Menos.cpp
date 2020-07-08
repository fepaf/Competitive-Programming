// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: C Mais ou Menos?
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2486

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
#define mp make_pair

using namespace std;

int t,n,total;
map<string,int> vitamina;
string alimento;

int main(){_
vitamina["suco de laranja"]=120;
vitamina["morango fresco"]=85;
vitamina["mamao"]=85;
vitamina["goiaba vermelha"]=70;
vitamina["manga"]= 56;
vitamina["laranja"]=50;
vitamina["brocolis"]=34;

    while ((cin>>t) && t){
        total = 0;
        while (t--){
            cin>>n;
            cin.ignore();
            getline(cin,alimento);
            total += n * vitamina[alimento];
        }
        if (total<110) cout<<"Mais "<<(110-total)<<" mg"<<endl;
        else if (total>130) cout<<"Menos "<<(total-130)<<" mg"<<endl;
        else cout<<total<<" mg"<<endl;
    }
    return 0;
}

