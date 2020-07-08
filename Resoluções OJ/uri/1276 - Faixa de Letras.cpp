// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Faixa de Letras
// Nível: 3
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1276

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 102
#define EPS (1e-7)
#define MOD 1000000007
#define UNVISITED -1
#define VISITED 1
#define ull unsigned long long
#define ll long long
#define ii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vi>
#define vii vector<ii>
#define vd vector<double>
#define qi queue<int>
#define fs first
#define sc second
#define pb push_back
#define mp make_pair

using namespace std;

string s,ans;
vi f;
char b,e;

int main(){_
    while (getline(cin,s)){
        f = vi(26,0);
        for (int i=s.size();i--;){
            if (s[i]!=' ') f[s[i]-'a']++;
        }
        ans="";
        for (int i=0;i<26;i++){
            if (!f[i]) continue;
            b=(i+'a');
            while (f[i] && i<26) ++i;
            --i;
            e=(i+'a');
            ans+=b;
            ans+=":";
            ans+=e;
            ans+=", ";
        }
        cout<<ans.substr(0,ans.size()-2)<<endl;
    }
    return 0;
}

