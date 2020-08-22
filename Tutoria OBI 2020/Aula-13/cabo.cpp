#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
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

using namespace std;

i64 n, p[MAX], ipl[MAX], ipr[MAX], lo, hi, md;
string nome[MAX];

i64 ta(i64 luck){
    return ipr[1]-ipr[luck+1]-(n-luck)*p[luck];
}

i64 tb(i64 luck){
    return ipl[n]-ipl[luck]-luck*(p[n]-p[luck]);
}

int main(){_
    while ((cin >> n) && n){
        nome[n+1] = "Impossibilidade de empate.";
        for (int i=1; i<=n; ++i){
            cin >> nome[i];
            p[i] = p[i-1];
            for (char c : nome[i]){
                p[i] += c;
            }
            ipl[i] = (p[i]-p[i-1])*i + ipl[i-1];
        }
        ipr[n+1] = 0;
        for (int i=n; i>=1; --i){
            ipr[i] = (p[i]-p[i-1])*(n+1-i) + ipr[i+1];
        }
        lo = 1; hi = n+1;
        while (lo < hi){
            md = lo + ((hi-lo)>>1);
            if (ta(md) >= tb(md)) hi = md;
            else lo = md+1;
        }
        cout << nome[ta(lo) == tb(lo) ? lo : n+1] << endl;
    }
    return 0;
}
