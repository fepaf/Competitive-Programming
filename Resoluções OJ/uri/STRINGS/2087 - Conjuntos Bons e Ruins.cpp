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
    int nxt[26];
    int fim, filhos;
    no (){
        fim = 0;
        filhos = 0;
        for (int i=26; i--;) nxt[i]=0;
    }
};

vector<no> trie;

int insert(string s){
    int ptr = 0, ans = 0;
    for (char c : s){
        c -= 'a';
        if (trie[ptr].nxt[c] == 0){
            ptr = trie[ptr].nxt[c] = sz(trie);
            trie.eb(no());
        }
        else{
            ptr = trie[ptr].nxt[c];
        }
    }
    ++trie[ptr].fim;
    return (ans == 1);
}

int dfs(int u, int p){
    int ans = 0;
    int v;
    for (int i=26; i--;){
        v = trie[u].nxt[i];
        if (v != p && v){
            ans = max (dfs(v, u),ans);
        }
    }
    return ans+trie[u].fim;
}

int main(){
    while ((cin >> n) && n){
        trie.eb(no());
        cin.ignore();
        for (int i=0; i<n; ++i){
            getline(cin, s[i]);
        }
        sort(s,s+n);
        ans = 1;
        for (int i=0; i<n; ++i){
            insert(s[i]);
        }
    //    ans = dfs(0,-1);
        cout << "Conjunto " << (ans==1 ? "Bom" : "Ruim") << endl;
        trie.clear();
    }
    return 0;
}

