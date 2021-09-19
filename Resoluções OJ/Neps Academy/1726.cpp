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

int n, mdc, tam, gab, usd;
string s, raiz, repet, ans;
map<char, int> f, p;

int main(){_
    cin >> n >> s;
    for (char c : s){
        ++f[c];
    }
    for (auto [k, v] : f){
        mdc = gcd(mdc, v);
    }
    tam = n / mdc;
    for (int i=0; i<tam; ++i){
        raiz += s[i];
        gab |= (1<<(s[i]-'a'));
    }
    if (mdc == 1){
        cout << '*' << endl;
        return 0;
    }
    ans = raiz;
    sort(all(raiz));
    for (int i=1; i<mdc; ++i){
        repet = "" , usd = 0;
        for (int j=i*tam; j<(i+1)*tam; ++j){
            repet += s[j];
            usd |= (1<<(s[j]-'a'));
        }
        sort(all(repet));
        if (repet != raiz || usd != gab){
            cout << '*' << endl;
            return 0;
        }
    }
    cout << ans << endl;
    return 0;
}
