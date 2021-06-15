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

int n, k, c[MAX], lo, hi, md, cnt, max_cnt, maximum, sum, tam;
map<string, int> v;
string s;

int main(){_
    for (char i='2'; i<='9'; i++){
        s = i;
        v[s] = (i-'0');
    }
    v["10"] = 10;
    v["A"] = 1;
    v["J"] = 11;
    v["Q"] = 12;
    v["K"] = 13;

    cin >> n >> k;
    for (int i=0; i<n; ++i){
        cin >> s;
        c[i] = v[s];
    }
    lo = *max_element(c, c+n); hi=accumulate(c,c+n,0);
    while (lo < hi){
        md = lo + ((hi-lo)>>1);
        cnt = sum = max_cnt = 0;
        tam = 1;
        for (int i=0; i<n; ++i){
            if (sum + c[i] <= md){
                sum += c[i];
                cnt++;
            } else{
                sum = c[i];
                cnt = 1;
                ++tam;
            }
            max_cnt = max(max_cnt, cnt);
        }
        if (tam <= k) hi = md;
        else lo = md+1;
    }
    cout << max_cnt << ' ' << lo << endl;

    return 0;
}
