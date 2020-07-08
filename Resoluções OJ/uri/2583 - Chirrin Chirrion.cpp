// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Chirrin Chirrion
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2583

#include<bits/stdc++.h>
#define vs vector <string>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,c,t;
string objeto,magia;
map<string,int> possui;

int main(){_
    cin>>c;
    while (c--){
        cin>>n;
        possui.clear();
        for (int i=n;i--;){
            cin>>objeto>>magia;
            if (magia=="chirrin") possui[objeto]=1;
            else if (magia=="chirrion") possui[objeto]=0;
        }
        cout<<"TOTAL"<<endl;
        for (auto x : possui){
            if (x.second) cout<<x.first<<endl;
        }
    }
    return 0;
}

