#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define ii pair<int,int>
#define vii vector<ii>
#define vvii vector<vii>
#define vi vector<int>
#define vvi vector<vi>
#define eb emplace_back

using namespace std;

int m, c, key, caso, t;
vvi tabela;
vvii adj;

int h(int k){
    return k%m;
}

int main(){_
    for (cin>>t; t--;){
        cin>>m>>c;
        tabela = vvi(m);
        while (c--){
            cin>>key;
            tabela[h(key)].eb(key);
        }

        if (caso++) cout<<endl;

        for (int i=0; i<m; i++){
            cout<<i<<" -> ";
            for (auto elemento : tabela[i]){
                cout<<elemento<<" ->";
            }
            cout<<"\\"<<endl;
        }
        tabela.clear();
    }
    return 0;
}
