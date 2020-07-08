// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Renzo e a Decoração Capic...
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1880

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX (1<<20)
#define vi vector<int>
#define eb emplace_back
#define all(x) (x).begin() , (x).end()

using namespace std;


vi rep(int n, int b){
    vi ans;
    do{
        ans.eb(n%b);
        n /= b;
    }while(n);
    return ans;
}

int n, t;
vi org, inv;
string ans;

int main(){_
    for (cin>>t; t--;){
        cin>>n; ans = "";
        for (int base=2; base<=16; base++){
            org = inv = rep(n, base);
            reverse(all(inv));
            if (org == inv){
                ans += " ";
                ans += to_string(base);
            }
        }
        cout<<(ans.size() ? ans.substr(1) : "-1")<<endl;
    }
}

