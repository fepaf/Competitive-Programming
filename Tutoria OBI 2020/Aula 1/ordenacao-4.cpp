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

struct pessoa{
    int idd;
    double alt;
    string nome;
    int id;
};

int cmp(pessoa a, pessoa b){
    if (a.idd != b.idd) return a.idd < b.idd;
    if (a.alt != b.alt) return a.alt > b.alt;
    if (a.id != b.id) return a.id < b.id;
    return a.nome < b.nome;
}

vector<pessoa> pessoas;
int n, a, b;

int main(){_
    cin >> n;
    
    pessoas = vector<pessoa>(n);
    
    for (int i=0; i<n; ++i){
        cin >> pessoas[i].nome >> pessoas[i].idd >> pessoas[i].alt;
        pessoas[i].id = i;
    }

    stable_sort(all(pessoas), cmp); //não-descrescente nos dois campos
    
    for (int i=0; i<n; ++i){
        cout << pessoas[i].nome << " " << pessoas[i].idd << " " << pessoas[i].alt << endl;
    }
    cout << endl;

    pessoas.clear();
    return 0;
}