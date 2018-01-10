#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define fs first
#define sc second


using namespace std;

int p,a,r, maior;
map<string,int> perola, burro;
string s,nome,ans;


int main(){_
    while ((cin>>p>>a>>r) && (p||a||r)){
        cin.ignore();
        while (p--){
            getline(cin, s);
            perola[s] = 1;
        }
        maior = 0;
        while (a--){
            getline(cin, nome);
            for (int i=r; i--;){
                getline(cin, s);
                burro[nome] += perola[s];
            }
            maior = max(maior, burro[nome]);
        }
        ans = "";
        for (auto par : burro){
            if (par.sc == maior){
                ans += ", ";
                ans += par.fs;
            }
        }
        cout<<ans.substr(2)<<endl;
        perola.clear() , burro.clear();
    }
    return 0;
}
