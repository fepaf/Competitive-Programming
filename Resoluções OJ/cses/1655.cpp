#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF (2e18)
#define MAX (1<<20)
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
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;
#define branco 0
#define cinza -1
#define preto 1

using namespace std;

/*
Problem: Maximum Xor Subarray
Link: https://cses.fi/problemset/task/1655
*/

struct no{
    int g[2], end;
    no (){
        g[0] = g[1] = end =0;
    }
};
 
vector<no> trie;
 
void insere(int s){
    int u = 0, d;
    for (int i=30; i--;){
        d = !!((1<<i)&s);
        if (!trie[u].g[d]){
            trie[u].g[d] = sz(trie);
            trie.eb(no());
        }
        u = trie[u].g[d];
    }
    trie[u].end = 1;
}
 
int query(int s){ // retorna o maior valor para x^s, onde x é uma cadeia da trie
    int u = 0, ans = 0;
    for (int i=30, d; i--;){
        d = !!((1<<i)&s);
        if (trie[u].g[d^1]){
            ans |= (1<<i);
            u = trie[u].g[d^1];
        } else {
            u = trie[u].g[d];
        }
    }
    return ans;
}
 
int ans, x, psa, n;
 
int main(){_
    cin >> n;
    trie.eb(no());
    ans = 0;
    insere(psa);
    while (n--){
        cin >> x;
        psa ^= x;
        ans = max(ans, query(psa));
        insere(psa);
    }
    cout << ans << endl;
    return 0;     
}
