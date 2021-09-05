#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX (1600123)
#define OUT MAX
#define MOD 1000000007
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii pair<i64, int>
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
#define tri(x) (((x)<<1)+(x))
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int n, q, a, b, c, dist[MAX], sufx, pref, pivo, newpref, p3;
int u, v;
string s[MAX], cpy;
char str[14];
queue<int> fila;
set<int> alvos;

int make_mask(string s){
    int ans = 0;
    for (int i=n; i--;){
        ans = tri(ans)+(s[i]-'A');
    }
    return ans;
}

int main(){_
    cin >> n >> q;
    // scanf("%d %d",&n, &q);

    memset(dist,-1,sizeof(dist));

    for (int i=q; i--;){
        cin >> s[i];
        // scanf("%s",str);
        // s[i] = str;

        a = b = c = 0;
        for (int j=n; j--;){
            a += (s[i][j]=='A');
            b += (s[i][j]=='B');
            c += (s[i][j]=='C');
        }

        cpy = string(a,'A')+string(b,'B')+string(c,'C');

        alvos.insert(make_mask(cpy));
    }

    for (int x : alvos){
        dist[x] = 0;
        fila.push(x);
    }

    while (!fila.empty()){
        u = fila.front(); fila.pop();

        v = u;

        p3 = 3;
        for (int i=0; i<n-1; ++i){
            pref = v/p3;
            sufx = v%p3;
            pivo = pref%3;
            newpref = pref/3;
            v = (newpref*p3+sufx)*3+pivo;
            if (dist[v] == -1){
                dist[v] = dist[u]+1;
                fila.push(v);
            }
            p3 = tri(p3);
        }
    }

    for (int i=q; i--;){
        cout << dist[make_mask(s[i])] << endl;
    }
    return 0;
}
