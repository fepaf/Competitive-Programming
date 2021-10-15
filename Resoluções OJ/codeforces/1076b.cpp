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
#define vi vector<i64>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))
#define esq(x) (x<<1)
#define dir(x) ((x<<1)|1)
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

i64 n, s;
bitset<MAX> comp;
vi p;
vi psa;

void crivo(int n){
    int i;
    p.eb(2);
    for (i=3; i*i<=n; i+=2){
        if (!comp[i]){
            p.eb(i);
            for (int j=i*i; j<=n; j+=i){
                comp[j] = 1;
            }
        }
    }
    for (int pi=p.back(); pi<=n; pi+=2){
        if (!comp[pi]){
            p.eb(pi);
        }
    }
}

int main(){_
    crivo(MAX-1);
    int i=0 ;
    psa.eb(s);
    for (i=0; s<10000000000LL; ++i){
        s+=p[i];
        psa.eb(s);
    }
    return 0;
}
