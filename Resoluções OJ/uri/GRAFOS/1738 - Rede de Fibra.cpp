// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Rede de Fibra
// Nível: 3
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1738

#include<bits/stdc++.h>
#define vi vector<int>
#define vvi vector<vi>
#define vvvi vector<vvi>
#define INF 0x3f3f3f3f
#define pb push_back
#define fs first
#define sc second
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,a,b,cnt;
string s,ans;
vvvi adj;

int main(){_
    while ((cin>>n)&&(n)){
        adj = vvvi(26,vvi(n+1,vi(n+1,0)));

        for (int i=26;i--;){
            for (int j=n+1;j--;){
                adj[i][j][j] = 1;
            }
        }

        while ((cin>>a>>b)&&(a||b)){
            cin>>s;
            for (int i=s.size();i--;){
                adj[s[i]-'a'][a][b]=1;
            }
        }

        for (int l=26; l--;){
            for (int k=1;k<=n;k++){
                for (int i=1;i<=n;i++){
                    for (int j=1;j<=n;j++){
                        adj[l][i][j] |= (adj[l][i][k] & adj[l][k][j]);
                    }
                }
            }
        }

        while ((cin>>a>>b)&&(a||b)){
            ans = "";
            for (int i=0;i<26;i++){
                if (adj[i][a][b]){
                    ans += (i+'a');
                }
            }
            if (!ans.size()){
                ans = "-";
            }
            cout<<ans<<endl;
        }
        cout<<endl;
    }
    return 0;
}

