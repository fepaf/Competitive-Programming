#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define sz(x) (int)(x).size()
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define all(x) (x).begin(), (x).end()

using namespace std;

/*
crescente idd
descrecente alt
crescente indice
*/

map<string, int> f;
map<string, int>::iterator it;
int x, n;
string nome;

int main(){_
    while (cin >> nome){
        if (f.count(nome)) cout << f[nome] << endl;
        // if (f.find(nome) != f.end()) cout << f[nome] << endl;
        if (nome == "francisco" || nome == "vitor"){
            f[nome]++;
        }
    }
    for (it = f.begin(); it != f.end(); it++){
        string k = it->fs;
        int v = it->sc;
        cout << k << " :" << v << endl;
    }
    f.clear();
    return 0;
}