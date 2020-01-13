
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
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
#define rep(i,a,b) for (int (i)=(a); (i)<=(b); ++(i))
#define repi(i,a,b) for (int (i)=(a); (i)>=(b); --(i))

using namespace std;

int n, x;
int a[MAX];

struct no{
    int nxt[2];
    no (){
        nxt[0] = nxt[1] = 0;
    }
};

vector <no> trie;

void insere(int x){
    int bit[30];
    for (int i=30; i--;){
        bit[29-i] = ((x>>i) & 1);
    }
    int u = 0;
    for (int i=0; i<30; ++i){
        if (trie[u].nxt[bit[i]] == 0){
            u = trie[u].nxt[bit[i]] = sz(trie);
            trie.eb(no());
        }
        else {
            u = trie[u].nxt[bit[i]];
        }
    }
}

int f(int u, int l){
    int esq = trie[u].nxt[0];
    int dir = trie[u].nxt[1];
    if (esq && dir){
        return ((1<<l) | min(f(esq,l-1), f(dir,l-1)));
    }
    else if (esq){
        return f(esq, l-1);
    }
    else if (dir){
        return f(dir, l-1);
    }
    return 0;
}

int main(){_
    cin >> n;
    trie.eb(no());
    for (int i=0; i<n; ++i){
        cin >> a[i];
        insere(a[i]);
    }
    cout << f(0, 29) << endl;
	return 0;
}
