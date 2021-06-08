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

int n, k;
int a[MAX];
vector<char> path;

/*
Problema: Dado N números, consigo fazer soma K?
*/


void imprimi(vector<char> a){
    for (auto ai : a){
        cout << ai << ' ';
    }
    cout << endl;
}

void gera(int u, int vis){
    if (vis == ((1<<n)-1)){
        imprimi(path);
        return;
    }
    // cout << accumulate(all(vis), 0) << endl;

    for (int v=0; v<n; ++v){
        if (!((1<<v)&vis)){
            path.eb(a[v]);
            gera(v, vis|(1<<v));
            path.pop_back();
        }
    }
}


int main(){_
    cin >> n >> k;
    for (int i=0; i<n; ++i){
        cin >> a[i];
    }
    gera(0, 0);
    return 0;
}
