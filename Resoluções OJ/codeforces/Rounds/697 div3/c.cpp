#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
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

int t, n, m, k, me , ma;
int a[MAX], b[MAX];
map<ii, int> pares;
map<int, int> fa, fb;
i64 ans;

int main(){_
    for (cin >> t; t--;){
        ans = 0;
        cin >> n >> m >> k;
        for (int i=0; i<k; ++i){
            cin >> a[i];
            ++fa[a[i]];
        }
        for (int i=0; i<k; ++i){
            cin >> b[i];
            ++fb[b[i]];
            ++pares[{a[i],b[i]}];
        }

        for (int i=0; i<k; ++i){
            ans += (k-(1LL*fa[a[i]]+1LL*fb[b[i]]-1LL*pares[{a[i],b[i]}])) * pares[{a[i],b[i]}];
        }

        cout << (ans>>1) << endl;
        
        fa.clear();
        fb.clear();
        pares.clear();
    }
    return 0;
}
