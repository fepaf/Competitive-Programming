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

string s;
int n;
int ans;

struct no{
    unordered_map<char,int> nxt;
    int fim;
    no (){
        fim = 0;
    }
};

vector<no> trie;

void insert(string s){
    int ptr = 0;
    for (char c : s){
        if (trie[ptr].nxt.find(c) == trie[ptr].nxt.end()){
            ptr = trie[ptr].nxt[c] = sz(trie);
            trie.eb(no());
        }
        else{
            ptr = trie[ptr].nxt[c];
            ans &= (!trie[ptr].fim);
        }
    }
    ++trie[ptr].fim;
}

void dfs(int u, int p, int l, char c){
    cout << c << ' ' << l << endl;
    for (auto x : trie[u].nxt){
        if (x.sc != p){
            dfs(x.sc, u, l+1, x.fs);
        }
    }
}

int main(){
    while ((cin >> n) && n){
        trie.eb(no());
        for (int i=0; i<n; ++i){
            cin >> s;
            insert(s);
        }
        dfs(0,-1,0,'*');
        trie.clear();
    }
    return 0;
}

