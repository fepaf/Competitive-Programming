// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: As Dicas de Ali Babá
// Nível: 5
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1606

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX (1<<10)

using namespace std;

int n, k , a;
set<int> seem;
string ans;

int main(){_
    while (cin>>k>>n){
        while (k--){
            cin>>a;
            if (seem.count(a)==0){
                ans += " ";
                ans += to_string(a);
            }
            seem.insert(a);
        }
        cout<<ans.substr(1)<<endl;
        seem.clear(); ans = "";
    }
}

