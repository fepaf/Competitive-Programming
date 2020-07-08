// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Abreviações
// Nível: 5
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1519

#include<bits/stdc++.h>
#define ic pair<char,int>
#define fs first
#define sc second
#define eb emplace_back
#define _ ios_base::sync_with_stdio(0);

using namespace std;

map<string , int> f;
map<char, string> best;
string word,linha,ans;
stringstream ss;

int main(){_
    while (getline(cin,linha) && (linha!=".")){
        for (ss<<linha; ss>>word;){
            if (word.size()>2){
                f[word]++;
                best[word[0]] = word;
            }
        }
        ss.clear();
        for (auto par : f){
            if (par.sc*(par.fs.size()-2) >= f[best[par.fs[0]]] * (best[par.fs[0]].size()-2)){
                best[par.fs[0]] = par.fs;
            }
        }
        ans = "";
        for (int i=0; i<linha.size(); i++){
            if (isalpha(linha[i])){
                for (word = ""; isalpha(linha[i]) && i<linha.size(); i++){
                    word += linha[i];
                }
                i--;
                if (word.size()>2 && word == best[word[0]]){
                    ans+=word[0];
                    ans+=".";
                }
                else{
                    ans+=word;
                }
            }
            else {
                ans += linha[i];
            }
        }
        cout<<ans<<endl<<best.size()<<endl;
        for (auto par : best){
            cout<<par.fs<<". = "<<par.sc<<endl;
        }
        f.clear() , best.clear();
    }
    // cout<<"funfou"<<endl;
    return 0;
}

