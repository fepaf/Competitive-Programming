// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Getline Three -  Calçados
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1218

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

int l,n,t,m,f,caso;
string linha;
char sexo;
stringstream ss;

int main(){_
    while (cin>>n){
        cin.ignore();
        getline(cin,linha);
        ss<<linha;
        // cout<<linha<<endl;
        while (ss>>t){
            ss>>sexo;
            // cout<<t<<" "<<sexo<<endl;
            t == n ? (sexo == 'M' ? ++m : ++f) : 0;
        }
        ss.clear();
        if (caso) cout<<endl;
        cout<<"Caso "<<++caso<<":"<<endl<<"Pares Iguais: "<<m+f<<endl<<"F: "<<f<<endl<<"M: "<<m<<endl;
        m=f=0;
    }
    return 0;
}

