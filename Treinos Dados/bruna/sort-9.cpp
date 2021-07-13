#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define OUT MAX
#define MOD 1000000007
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii pair<int, int>
#define fs first
#define sc second
#define eb emplace_back
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))
#define esq(x) (x<<1)
#define dir(x) ((x<<1)|1)
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

/*
critérios desempte
-idade crescente
-altura decrescente
-nome "crescente"
*/

struct tpessoa{
    string nome;
    int idade;
    float altura;
};

tpessoa pessoas[MAX];
int n;

int cmp(tpessoa a, tpessoa b){
    if (a.idade != b.idade) return a.idade < b.idade;
    if (a.altura != b.altura) return a.altura > b.altura;
    return a.nome < b.nome;
}

int main(){_
    cin >> n;
    for (int i=0; i<n; ++i){
        cin >> pessoas[i].nome >> pessoas[i].idade >> pessoas[i].altura;
    }
    
    sort(pessoas, pessoas+n, cmp);

    for (int i=0; i<n; ++i){
        cout << pessoas[i].nome << ' ';
        cout << pessoas[i].idade << ' ';
        cout << pessoas[i].altura << endl;
    }
    return 0;
}
