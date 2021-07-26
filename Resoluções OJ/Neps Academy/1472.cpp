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

struct pessoa{
    int l, id;
    string nome;
};

pessoa p[MAX];

int cmp(pessoa a, pessoa b){
    if (a.l != b.l) return a.l > b.l;
    if (a.id != b.id) return a.id < b.id;
    return a.nome < b.nome;
}

int n;

int main(){_
    cin >> n;
    for (int i=0; i<n; ++i){
        getline(cin, p[i].nome);
        getline(cin, p[i].nome);
        cin >> p[i].l;
        p[i].id = i;
    }
    sort(p,p+n,cmp);
    cout << p[0].nome << endl;
    return 0;
}
