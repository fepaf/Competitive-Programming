// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Conjuntos Bons e Ruins 
// Nível: 7
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2087

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX (1<<20)
#define fs first
#define sc second
#define eb emplace_back
#define sz(x) (int)((x).size())

using namespace std;

string s[MAX];
int n;
int ans;

struct no{
    no *g[26];
    int end;
    no (){
        for (int i=26; i--;) g[i] = NULL;
        end = 0;
    }
};

no *root;

int insert(string s){
    no *u = root;
    for (char c : s){
        c -= 'a';
        if (u->g[c] == NULL){
            u->g[c] = new no();
        }
        if (u->g[c]->end){
            ans = 0;
        }
        u = u->g[c];
    }
    u->end = 1;
}

int main(){
    while ((cin >> n) && n){
        root = new no();
        for (int i=0; i<n; ++i){
            cin >> s[i];
        }
        sort(s,s+n);
        ans = 1;
        for (int i=0; i<n; ++i){
            if (!ans) break;
            insert(s[i]);
        }
        cout << "Conjunto " << (ans==1 ? "Bom" : "Ruim") << endl;
    }
    return 0;
}

