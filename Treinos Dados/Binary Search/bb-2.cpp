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

int lo, hi, md, a[MAX], n, x;

int p(int idx, int x){
    return x <= a[idx];
}

int main(){_
    cin >> n;
    for (int i=0; i<n; ++i){
        cin >> a[i];
    }
    cin >> x;
    lo = 0, hi = n-1;
    while (lo < hi){
        md = lo + (hi-lo)/2;
        if (p(md, x)) hi = md;
        else lo = md + 1;
    }
    if (a[lo]==x) cout << "primeira ocorrencia de " << x << " na posicao " << lo << endl;
    else cout << "nao achou" << endl;
    return 0;
}
