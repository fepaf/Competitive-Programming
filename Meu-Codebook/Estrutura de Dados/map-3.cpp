#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 long long
#define si pair<int,string>
#define vsi vector<si>
#define vi vector<int>
#define fs first
#define sc second
#define eb emplace_back
#define ALL(x) (x).begin() , (x).end()

using namespace std;

/*ler varios nomes e imprimir uma lista ordenada crescente pela frequencia desempatando crescente por nome*/

int n,x,m;
string s;
map<string,int> freq;//ordenado
vsi lista;

int main(){_
    while (cin>>n){
        while (n--){
            cin>>s;
            ++freq[s];
        }
        cout<<"MAP"<<endl;
        for (auto p : freq){
            lista.eb(p.sc,p.fs);
            cout<<"->"<<p.fs<<" "<<p.sc<<endl;
        }
        sort(ALL(lista));
        cout<<"Vector de pair"<<endl;
        for (auto p : lista){
            cout<<"->"<<p.sc<<" "<<p.fs<<endl;
        }
        lista.clear();
    }
    return 0;
}
