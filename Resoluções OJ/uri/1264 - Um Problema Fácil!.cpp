// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Um Problema Fácil!
// Nível: 5
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1264

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 1000123
#define vi vector<ll>
#define eb emplace_back
#define ll long long

using namespace std;

int v[1<<8],r,m;
string n;

inline string findBase(string s){
    int tam = s.size(), r, minimum = 2;
    for (int i=0;i<tam;i++){
        minimum = max(minimum,v[s[i]]+1);
    }
    for (int base=minimum;base<63;base++){
        r = 0;
        for (int i=0;i<tam;i++){
            r = (base*r+v[s[i]])%(base-1);
        }
        if (!r) return to_string(base);
    }
    return "such number is impossible!";
}

int main(){_
    for (int i='0'; i<='9'; i++){
        v[i]=i-'0';
    }
    for (int i='A'; i<='Z'; i++){
        v[i]=i-'A'+10;
    }
    for (int i='a'; i<='z'; i++){
        v[i]=i-'a'+36;
    }

    while (cin>>n){
        if (n[0]=='-') n.erase(0,1);
        cout<<findBase(n)<<endl;
    }
    return 0;
}

