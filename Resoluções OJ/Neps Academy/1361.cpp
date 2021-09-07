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

int t, n, m, v[1<<8], msg[201][30];
string s, key;

int main(){_
    
    for (char c='0'; c<='9'; ++c){
        v[c] = c-'0';
    }
    for (char c='a'; c<='f'; ++c){
        v[c] = c-'a'+10;
    }
    

    cin >> n >> m;
    for (int i=0; i<n; ++i){
        cin >> s;
        for (int j=0; j<m; j++){
            msg[i][j] = (v[s[j<<1]]<<4)|(v[s[(j<<1)|1]]);
        }
    }

    for (int i=0; i<m; ++i){
        key += msg[n-1][i]^' ';
        cout << setw(2) << setfill('0') << hex << (int)(key[i]&((1<<8)-1));
    }
    cout << endl;

    for (int i=0; i<n-1; ++i){
        s = "";
        for (int j=0; j<m; ++j){
            s += msg[i][j]^key[j]; 
        }
        cout << s << endl;
    }
    
    return 0;
}
