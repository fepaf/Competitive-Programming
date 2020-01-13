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
    int g[26];
    int end = 0;
    no (){
        for (int i=26; i--;) g[i] = 0;
        end = 0;
    }
};

vector <no> trie;

void insert(string s){
    int u = 0;
    for (char c : s){
        c -= 'a';
        if (!trie[u].g[c]){
           trie[u].g[c] = sz(trie);
           trie.eb(no());
        }
        u = trie[u].g[c];
        ans &= (!trie[u].end); 
    }
    trie[u].end = 1;
}

int main(){
    while ((cin >> n) && n){
        trie.eb(no());
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
        trie.clear();
    }
    return 0;
}

